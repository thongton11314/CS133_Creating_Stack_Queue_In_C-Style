#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include "Stack.h"
#include "Queue.h"

int main()
{
	//Pracitce stack
	Stack* stack = initializeStack();
	for (int i = 0; i < 11; i++)
		push(stack, i);
	printf("Last Value of stack = %i\n", peak(stack));
	printf("Stack(FIFO): ");
	while (!isEmptyStack(stack))
		printf("%i " , pop(stack));
	printf("\n");

	//Practice queue
	Queue* queue = initializeQueue();
	for (int i = 0; i < 11; i++)
		enqueue(queue, i);
	printf("First value of queue = %i\n", getFront(queue));
	printf("Queue(LIFO): ");
	while (!isEmptyQueue(queue))
		printf("%i ", dequeue(queue));
	printf("\n");

	getchar();
	return 0;
}