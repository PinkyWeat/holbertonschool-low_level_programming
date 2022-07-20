# C - File I/O

### Description

In Unix and Unix-like computer operating systems, a [file descriptor](https://en.wikipedia.org/wiki/File_descriptor) (FD, less frequently fildes) is a unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

File descriptors are a part of the POSIX API. Each Unix process (except perhaps daemons) should have three standard POSIX file descriptors, corresponding to the three standard streams:

Integer value | Name | \<unistd.h> symbolic constant | \<stdio.h> file stream |
:------------:|:----:|:-----------------------------:|:----------------------:|
      0       | Standard input | STDIN_FILENO | stdin |
      1       | Standard output| STDOUT_FILENO | stdout |
      2       | Standard error | STDERR_FILENO | stderr |

![](https://upload.wikimedia.org/wikipedia/commons/f/f8/File_table_and_inode_table.svg)

---

### Requirements

- ll files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
- Code uses the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed.
- No more than 5 functions per file.
- The only C standard library functions allowed are ``malloc``, ``free`` and ``exit``. Any use of functions like ``printf``, ``puts``, ``calloc``, ``realloc`` etc… is forbidden
- Allowed syscalls: ``read``, ``write``, ``open``, ``close``
- ``_putchar`` is allowed.
- The prototypes of all functions and the prototype of the function ``_putchar`` are included the header file called main.h
- All header files are include guarded.
---

### Compilation & Testing

Function prototype:

	ssize_t read_textfile(const char *filename, size_t letters);

We compile with:

	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a

---

### File Description

- **0-read_textfile.c**- file contains a function that reads a text file and prints it to the POSIX standard output.
- **1-create_file.c** - file contains a function that creates a file.
- **2-append_text_to_file.c** - file contains a function that appends text at the end of a file.
- **3-cp.c** - file contains a program that copies the content of a file to another file.
---

### Author 

Written by [Denisse Landau](https://www.linkedin.com/in/denisselandau/ "Denisse Landau") based on Holberton School project "C - File I/O".
