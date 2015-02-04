/**
 * @author Matthew Palmer <matt@matthewpalmer.net>
 * @version 0.0.1
 * @since 2015-01-28
 */

/**
 * A collection of handy bit utility functions.
 * Often paired with bitqueue
 */

/**
 * Get the kth bit *from the right* of the integer n.
 * The rightmost bit is bit 0
 * 
 * @param  n The integer to get the kth bit of
 * @param  k The index of the bit to get
 * @return   1 | 0
 */
int kth_bit_from_right(int n, int k);

/**
 * Sets the kth bit *from the right* of the integer n to 1.
 * @param  n The integer whose bit we want to set
 * @param  k The index of the bit to set
 * @return   The new value, with the set bit.
 */
int set_kth_bit_from_right(int n, int k);

/**
 * Unsets the kth bit *from the right* of the integer n to 0.
 * @param  n The integer whose bit we want to unset
 * @param  k The index of the bit to unset
 * @return   The new value, with the unset bit.
 */
int unset_kth_bit_from_right(int n, int k);

/**
 * Get the collection of bits within the range [k1, k2).
 * Note that these are numbered from the right.
 * @param  n  The number to extract bits from
 * @param  k1 The first index (lower)
 * @param  k2 The second index (higher)
 * @return    The value of the bits taken from n in the range k2 - k1
 */
int bits_in_range(int n, int k1, int k2);

/**
 * Appends a bit to the end of the input number
 * Note that this necessitates shifting the input number left
 * @param  n   The input number
 * @param  bit The bit to append. 1 | 0
 * @return     The new value, with the bit appended.
 */
int append_bit(int n, int bit);

/**
 * Prints the bits of an item
 * @param size The number of bytes an item takes up
 * @param ptr  A pointer to the item to be printed.
 */
void print_bits(size_t const size, void const * const ptr);
