#include "monty.h"

/**
  *f_rotr - rotates the stack to the bottom
  *@head: parameter for stack head
  *@count: parameter for line_number
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *new;

	new = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (new->next)
	{
		new = new->next;
	}
	new->next = *head;
	new->prev->next = NULL;
	new->prev = NULL;
	(*head)->prev = new;
	(*head) = new;
}
