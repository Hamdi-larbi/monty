#include <stdio.h>
#include "monty.h"

/**
 * pall - prints all the values on the stack,
 * starting from the top of the stack
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 *
 */
void pall(stack_t **head, unsigned int line_number)
{
	stack_t *temp = *head;
	(void) line_number;

	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
