#C - Singly Linked Lists

###Description

Like arrays, Linked List is a linear data structure. Unlike arrays, [linked list](https://www.geeksforgeeks.org/linked-list-set-1-introduction/) elements are not stored at a contiguous location; the elements are linked using pointers. They includes a series of connected nodes. Here, each node stores the data and the address of the next node.

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

---

### Requirements

- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- Code uses the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed.
- No more than 5 functions per file.
- All prototypes of all functions and libraries used are included in header file ``main.h``.
---

###Compilation & Testing

Function porototype:

	int _printf(const char *format, ...);

We compile with:

	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c
---
### Example

---
### File Description

- **0-print_list.c** - prints all the elements of a ``list_t`` list.
- **1-list_len.c** - returns the number of elements in a linked ``list_t`` list.
- **2-add_node.c** - adds a new node at the beginning of a ``list_t`` list.
- **3-add_node_end.c** - adds a new node at the end of a ``list_t`` list.
- **4-free_list.c** - frees a ``list_t`` list.
---
### Authors

Written by [Denisse Landau] (https://www.linkedin.com/in/deni    sse-l-5844a5140/ "Denisse Landau") based on Holberton School project "C - Singly linked lists".
