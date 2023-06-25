#include "monty.h"
/**
 * f_queue - prints the top
 * @head: parameter for stack head
 * @count: parameter for line_number
*/

void f_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @head: parameter for head of stack
 * @n: parameter for new_value
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *new_num;

	new_num = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (new_num)
	{
		while (new_num->next)
			new_num = new_num->next;
	}
	if (!new_num)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_num->next = new_node;
		new_node->prev = new_num;
	}
}
