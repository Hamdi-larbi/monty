#include <stdio.h>
#include <stdlib.h>
#include <monty.h>


/**
 * push - push a new data to the stack/ queue
 * n : the data to be pushed to the stack
 */

void push(int n)
{
	stack_t *newNode;

	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		perror("Stack overflow\n");
		exit(1);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;
	top->prev = newNode;
	newNode->next = top;
	top = newNode;

}
