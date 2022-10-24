0x13. C - More singly linked lists



0) 0-print_listint.c is a function that prints all elements of a listint_t list.

Prototype: size_t print_listint(const listint_t *h);
Return: the number of nodes
Format: see example
You are allowed to use printf

1) 1-listint_len.c is a function that returns the number of items in a linked list listint_t.

Prototype: size_t listint_len(const listint_t *h)

2) 2-add_nodeint.c is a function that adds a new node to the start of a listint_t list.

Prototype: listint_t *add_nodeint(listint_t **head, const int n);
Returns: the address of the new element, or NULL if it failed

3) 3-add_nodeint_end.c is a function that adds a new node to the end of a listint_t list.

Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
Returns: the address of the new element, or NULL if it failed

4) 4-free_listint.c is a function that frees a listint_t list.

Prototype: void free_listint(listint_t *head)

5) 5-free_listint2.c is a function that frees a listint_t list.

Prototype: void free_listint2(listint_t **head);
Function sets the head to NULL

6) The 6-pop_listint.c is a function that removes the main node from a linked list listint_t and returns data from the main node (n).

Prototype: int pop_listint(listint_t **head);
if the linked list is empty returns 0

7) 7-get_nodeint.c is a function that returns the nth node of a linked list listint_t.

Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
where index is the index of the node, starting at 0
if the node does not exist, returns NULL

8) 8-sum_listint.c is a function that returns the sum of all (n) data in a linked list listint_t.

Prototype: int sum_listint(listint_t *head);
if the list is empty, returns 0
