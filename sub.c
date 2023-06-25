#include "monty.h"

/**
  *f_sub - subtracts top from second top element of stack
  *@head: parameter for stack head
  *@count: parameter for line_number
 */
void f_sub(stack_t **head, unsigned int count)
{
	stack_t *result;
	int i, j;

	result = *head;
	for (j = 0; result != NULL; j++)
		result = result->next;
	if (j < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	result = *head;
	i = result->next->n - result->n;
	result->next->n = i;
	*head = result->next;
	free(result);
}
