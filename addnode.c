#include "monty.h"
/**
 * addnode - add node to the head stack
 * @head: parameter for head of stack
 * @n: parameter for new_value
*/

void addnode(stack_t **head, int n)
{

	stack_t *new_node, *sum;

	sum = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (sum)
		sum->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
