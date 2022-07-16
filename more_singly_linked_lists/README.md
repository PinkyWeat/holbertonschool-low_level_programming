# C - More singly linked lists

### Description

Like arrays, Linked List is a linear data structure. Unlike arrays, [linked list](https://www.geeksforgeeks.org/linked-list-set-1-introduction/) elements are not stored at a contiguous location; the elements are linked using pointers. They includes a series of connected nodes. Here, each node  stores the data and the address of the next node.

![](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

---

### Requirements

- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ``-Wall -Werror -Wextra -pedantic-std=gnu89``
- Code uses the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- No global variables are allowed.
- No more than 5 functions per file.
- All prototypes of all functions and libraries used are included in header file ``main.h``.

---
### Compilation & Testing

Function porototype:

	size_t print_listint(const listint_t *h);	

We compile with:

	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c

---

### File Description

- **0-print_listint.c** - file contains a function that prints all the elements of a ``listint_t`` list.
- **1-listint_len.c** - file contains a function that prints all the elements of a ``listint_t`` list.
- **2-add_nodeint.c** - file contains a function that adds a new node at the beginning of a ``listint_t`` list.
- **3-add_nodeint_end.c** - file contains a function that adds a new node at the end of a ``listint_t`` list.
- **4-free_listint.c** - file contains a function that frees a ``listint_t`` list.
- **5-free_listint2.c** - file contains a function that frees a ``listint_t`` list.
- **6-pop_listint.c** - file contains a function that deletes the head node of a ``listint_t`` linked list, and returns the head node’s data (n).
- **7-get_nodeint.c** - file contains a function that returns the nth node of a ``listint_t`` linked list.
- **8-sum_listint.c** - file contains a function that returns the sum of all the data (n) of a ``listint_t`` linked list.
- **9-insert_nodeint.c** - file contains a function that inserts a new node at a given position.
- **10-delete_nodeint.c** - file contains a function that deletes the node at index index of a 	``listint_t`` linked list.

Advanced tasks:

- **100-reverse_listint.c** - file contains two functions, a main one and an auxiliary that reverses a ``listint_t`` linked list recursively.

---

### Author

Written by [Denisse Landau](https://www.linkedin.com/in/denisse-l-5844a5140/ "Denisse Landau") based on Holberton School project "C - More singly linked lists".
