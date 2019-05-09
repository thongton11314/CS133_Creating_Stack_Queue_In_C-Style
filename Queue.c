#include "Queue.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

Queue* initializeQueue()
{
	Queue* q = malloc(sizeof(Queue));
	q->nextIndex = 0;
	q->capacity = 10;
	q->arr = calloc(q->capacity, sizeof(int));
	return q;
}

void deleteQueue(Queue* q)
{
	assert(q);
	free(q->arr);
	free(q);
}

void enqueue(Queue* q, int value)
{
	if (q->nextIndex == q->capacity)
	{
		q->capacity *= 2;
		q->arr = realloc(q->arr, q->capacity * sizeof(int));
	}
	q->arr[q->nextIndex++] = value;
}

int dequeue(Queue* q)
{
	int value = q->arr[0];
	for (int i = 1; i < q->nextIndex; i++)
		q->arr[i - 1] = q->arr[i];
	q->nextIndex--;
	return value;
}

int getFront(Queue* q)
{
	return q->arr[0];
}

bool isEmptyQueue(Queue* q)
{
	return (q->nextIndex == 0);
}
