#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: parameter for head of stack
*/

void free_stack(stack_t *head)
{
	stack_t *new;

	new = head;
	while (head)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
