#include "monty.h"

/**
 * f_swap - swaps top two elements of the stack.
 * @head: parameter for stack head
 * @count: parameter for line_number
*/
void f_swap(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, new;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	new = h->n;
	h->n = h->next->n;
	h->next->n = new;
}
