# C - Bit manipulation

## Description

In the C programming language, operations can be performed on a bit level using bitwise operators.

[Bitwise operations](https://en.wikipedia.org/wiki/Bitwise_operations_in_C) are contrasted by byte-level operations which characterize the bitwise operators' logical counterparts, the AND, OR, NOT operators. Instead of performing on individual bits, byte-level operators perform on strings of eight bits (known as bytes) at a time. The reason for this is that a byte is normally the smallest unit of addressable memory (i.e. data with a unique memory address).

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/232/bitwise.PNG)
---

### Requirements

- All your files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
-  Code uses the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed.
- No more than 5 functions per file.
- The only C standard library functions allowed are ``malloc``, ``free`` and ``exit``
- Any use of functions like ``printf``, ``puts``, ``calloc``, ``realloc`` etc… is forbidden.
- The prototypes of all functions and the prototype of the function ``_putchar`` are included the header file called main.h
- All header files are include guarded.
---

### File Description

- **0-binary_to_uint.c** - file contains a function that converts a binary number to an ``unsigned int``.
- **1-print_binary.c** - file contains a function that prints the binary representation of a number.
- **2-get_bit.c** - file contains a function that returns the value of a bit at a given index.
- **3-set_bit.c** - file contains a function that sets the value of a bit to 1 at a given index.
- **4-clear_bit.c** - file contains a function that sets the value of a bit to 0 at a given index.
- **5-flip_bits.c** - file contains a function that returns the number of bits you would need to flip to get from one number to another.
---

### Author

Written by [Denisse Landau](https://www.linkedin.com/in/denisselandau/ "Denisse Landau") based on Holberton School project "C - Mo    re singly linked lists".
