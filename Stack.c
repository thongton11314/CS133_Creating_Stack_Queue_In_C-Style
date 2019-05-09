#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>
#include "Stack.h"

Stack* initializeStack()
{
	Stack* s = malloc(sizeof(Stack));
	s->nextIndex = 0;
	s->capacity = 10;
	s->arr = calloc(s->capacity, sizeof(int));
	return s;
}

void deleteStack(Stack* stack)
{
	if (stack != NULL)
	{ 
		free(stack->arr); 
		free(stack);
	}
}

void push(Stack * stack, int value)
{
	if (stack->nextIndex == stack->capacity)
	{
		stack->capacity *= 2;
		stack->arr = realloc(stack->arr, stack->capacity * sizeof(int));
	}
	stack->arr[stack->nextIndex] = value;
	stack->nextIndex++;
}

int pop(Stack * stack)
{
	assert(stack->nextIndex > 0);
	int value = stack->arr[stack->nextIndex - 1];
	stack->nextIndex--;
	return value;
}

int peak(const Stack* stack)
{
	assert(stack->nextIndex > 0);
	return stack->arr[stack->nextIndex - 1];
}

bool isEmptyStack(const Stack * stack)
{
	return (stack->nextIndex == 0);
}
