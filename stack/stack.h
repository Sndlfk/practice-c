#ifndef PROJECT_STACK_H
#define PROJECT_STACK_H
#include <stdbool.h>

typedef struct StackC {
	int top;
	int size;
	int *array;
} Stack;

Stack* new_stack(int);
void push(Stack*, int);
int pop(Stack*);
bool isEmpty(Stack*);
bool isFull(Stack*);

#endif 
