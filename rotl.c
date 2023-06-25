#include "monty.h"

/**
  *f_rotl- rotates the stack to the top
  *@head: parameter for stack head
  *@count: parameter for line_number
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int count)
{
	stack_t *tmp = *head, *new;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	new = (*head)->next;
	new->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = new;
}
