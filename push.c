#include <stdio.h>
#include <stdlib.h>
#include "monty.h"


/**
 * push - push a new data to the stack/ queue
 * @head: stack head
 * @line_number: line_number
 * Return: no return
 */

void push(stack_t **head, unsigned int line_number)
{
	stack_t *newNode;
	int j = 0;

	if (bus.arg == NULL)
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
			{
				printf("L%d: usage: push integer\n", line_number);
				exit(EXIT_FAILURE);
			}
		}
	}


	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Stack overflow\n");
		exit(1);
	}
	newNode->n = atoi(bus.arg);
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->next = *head;
	*head = newNode;
}
