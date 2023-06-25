#include "monty.h"

/**
 * f_pstr - prints string starting at the top of stack
 * @head: parameter for stack head
 * @count: parameter for line_number
*/
void f_pstr(stack_t **head, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
