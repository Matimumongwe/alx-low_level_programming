/**
 * print_listint - This function prints all the elements in a linked list.
 *
 * @h: A pointer to the head node of the linked list.
 *
 * Return: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
	/* Initialize a counter variable to keep track of the number of nodes. */
	size_t num_nodes = 0;

	/* Traverse the linked list, printing each element and incrementing the counter. */
	while (h)
	{
		printf("%d\n", h->n);
		num_nodes++;
		h = h->next;
	}

	/* Return the number of nodes in the linked list. */
	return (num_nodes);
}
