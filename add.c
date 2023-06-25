#include "monty.h"

/**
 * f_add - adds top two elements of stack
 * @head: parameter for head
 * @count: parameter for line_number
*/
void f_add(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, sum;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	sum = h->n + h->next->n;
	h->next->n = sum;
	*head = h->next;
	free(h);
}
