#include "monty.h"

/**
 * f_mod - computes rest of the division of second by top element of stack
 * @head: parameter for stack head
 * @count: parameter for line_number
*/
void f_mod(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, result;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = h->next->n % h->n;
	h->next->n = result;
	*head = h->next;
	free(h);
}
