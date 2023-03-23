#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 *
 */

void pop(stack_t** head, unsigned int line_number)
{
	stack_t* temp = *head;

	if (temp == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}
	*head = temp->next;
	*head->prev = NULL;
	temp->next = NULL;
	free(temp);
	temp = NULL;
}
