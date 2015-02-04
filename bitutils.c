#include <stdio.h>
#include <assert.h>

// Get the kth bit *from the right*
int kth_bit_from_right(int n, int k) {
    return (n & ( 1 << k )) >> k;
}

// Set the kth bit from the right
int set_kth_bit_from_right(int n, int k) {
    return n | (1 << k);    
}

// Unset the kth bit from the right
int unset_kth_bit_from_right(int n, int k) {
    return n & ~(1 << k);
}

// Append a bit to the end of n (i.e. right end)
int append_bit(int n, int bit) {
    assert(bit == 0 || bit == 1);
    int new_n = n << 1;
    new_n = new_n | bit;
    return new_n;
}

// Get bits in the range [k1, k2)
int bits_in_range(int n, int k1, int k2) {
    int i;
    int result = 0;
    for (i = k2 - 1; i >= k1; i--) {
        int b = kth_bit_from_right(n, i);
        result = append_bit(result, b);
    }
    return result;
}

// Assumes little endian
void print_bits(size_t const size, void const * const ptr) {
    unsigned char *b = (unsigned char*) ptr;
    unsigned char byte;
    int i, j;

    for (i = size - 1; i >= 0; i--) {
        for (j = 7; j >= 0;j --) {
            byte = b[i] & (1 << j);
            byte >>= j;
            printf("%u", byte);
        }
    }

    puts("");
}