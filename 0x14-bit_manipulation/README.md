0x14. C - Bit manipulation


0) The 0-binary_to_uint.c file is a function that converts a binary number into an unsigned integer.

Prototype: unsigned int binary_to_uint(const char *b);
where b points to a string of 0 and 1 characters
Returns: the converted number, or 0 if
there are one or more characters in string b that are not 0 or 1
b is NULL


1) The 1-print_binary.c file is a function that prints the binary representation of a number.

Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators


2) The 2-get_bit.c file is a function that returns the value of a bit at a given index.

Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured


3) The 3-set_bit.c file is a function that sets the value of a bit to 1 at a given index.

Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred


4) The 4-clear_bit.c file is a function that sets the value of a bit to 0 at a given index.

Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred


5) The 5-flip_bits.c file is a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators
