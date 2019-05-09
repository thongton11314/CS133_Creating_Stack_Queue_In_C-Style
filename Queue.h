#ifndef _QUEUE_
#define _QUEUE_
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct Queue
{
	int *arr;
	int nextIndex;
	int capacity;
} Queue;

Queue* initializeQueue();
void deleteQueue(Queue* q);
void enqueue(Queue* q, int value);
int dequeue(Queue* q);
int getFront(Queue* q);
bool isEmptyQueue(Queue* q);
#endif