#include <stdio.h>
#include "monty.h"

/**
 * pall - prints all the values on the stack,
 * starting from the top of the stack
 *
 */

void  pall(void)
{
	stack_t *temp = top;

	if (temp == NULL)
		exit(0);
	while(temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
