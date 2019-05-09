#ifndef _STACK_
#define _STACK_
#include <stdbool.h>

typedef struct Stack
{
	int *arr;
	int nextIndex;
	int capacity;
} Stack;

Stack* initializeStack();
void deleteStack(Stack* stack);
void push(Stack* stack, int value);
int pop(Stack* stack);
int peak(const Stack* stack);
bool isEmptyStack(const Stack* stack);
#endif