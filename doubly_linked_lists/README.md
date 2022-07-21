# C - Doubly linked lists

## Description

In computer science, a [doubly linked list](https://en.wikipedia.org/wiki/Doubly_linked_list) is a linked data structure that consists of a set of sequentially linked records called *nodes*.
Each node contains three fields: *two link fields* (references to the previous and to the next node in the sequence of nodes) and *one data field*.
The beginning and ending nodes previous and next links, respectively, point to some kind of terminator, typically a sentinel node or null, to facilitate traversal of the list.

![](https://cdn.programiz.com/cdn/farfuture/mljtoHadEO77LO97a_D4AP54FZNVSrSSZ32UVNV53Yg/mtime:1620967584/sites/tutorial2program/files/doubly-linked-list-created.png)

---

### Requirements

- All files will be compiled on Ubuntu 20.04 LTS using ``gcc``, using the options ``-Wall -Werror -Wextra -pedantic -std=gnu89``
- Code uses the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed.
- No more than 5 functions per file.
- The only C standard library functions allowed are ``malloc``, ``free`` and ``exit``
- All header files are include guarded.
---

### Compilation & Testing

Function prototype:

	dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

We compile with:

	gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d

---

### File Description

- **0-print_dlistint.c** - contains a function that prints all the elements of a ``dlistint_t`` list.
- **1-dlistint_len.c** - file contains a function that returns the number of elements in a linked ``dlistint_t`` list.
- **2-add_dnodeint.c** - file contains a function that adds a new node at the beginning of a ``dlistint_t`` list.
- **3-add_dnodeint_end.c** - file contains a function that adds a new node at the end of a ``dlistint_t`` list.
- **4-free_dlistint.c** - file contains a function that frees a ``dlistint_t`` list.
- **5-get_dnodeint.c** - file contains a function that returns the nth node of a ``dlistint_t`` linked list.
- **6-sum_dlistint.c** - file contains a function that returns the sum of all the data (n) of a ``dlistint_t`` linked list.
- **7-insert_dnodeint.c** - file contains a function that inserts a new node at a given position.
- **8-delete_dnodeint.c** - file contains a function that deletes the node at index index of a ``dlistint_t`` linked list.
---

### Author

 Written by [Denisse Landau](https://www.linkedin.com/in/denisselandau/ "Denisse Landau") based on Holberton School project "C - Doubly linked lists".
