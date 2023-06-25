#include "monty.h"

/**
 * f_pall - prints all values on stack
 * @head: parameter for stack head
 * @count: parameter for line_number
*/
void f_pall(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
