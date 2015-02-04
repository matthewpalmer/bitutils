bitutils
========

Simple utility functions for bitwise manipulation

Installation
------------

As a submodule

    git submodule add https://github.com/matthewpalmer/bitutils.git

Manually, you can just copy in the `bitutils.c` and `bitutils.h` files.

Usage
-----

Refer to [bitutils.h][header] for more documentation.

```c
int kth_bit_from_right(int n, int k);
int set_kth_bit_from_right(int n, int k);
int unset_kth_bit_from_right(int n, int k);
int bits_in_range(int n, int k1, int k2); // 0th bit is the rightmost bit
int append_bit(int n, int bit);
void print_bits(size_t const size, void const * const ptr);
```

[header]: bitutils.h