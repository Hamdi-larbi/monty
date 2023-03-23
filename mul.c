#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * mul - removes the top element of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 *
 */

void mul(stack_t** head, unsigned int line_number)
{
	stack_t* temp = *head;
	int j, i = 0;

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (i < 2)
	{
		printf("L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	(*head)->n = temp->n * (*head)->n;
	(*head)->prev = NULL;
	temp->next = NULL;
	free(temp);
	temp = NULL;
}
