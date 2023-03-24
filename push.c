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
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	newNode->n = atoi(bus.arg);
	newNode->prev = NULL;
	newNode->next = NULL;
	newNode->next = *head;
	*head = newNode;
}
