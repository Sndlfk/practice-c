#include "stack.h"

Stack *new_stack(int size) {
	Stack *stack = malloc(sizeof(Stack));
	stack->array = malloc(sizeof(size));
	stack->top = -1;
	stack->size = size;
	return stack;
}

void push(Stack *stack, int i) {
	stack->array[++(stack->top)] = i;
}

int pop(Stack *stack) {
	return (stack->array[(stack->top)--]);
}

bool isEmpty(Stack *stack) {
	if(stack->top == -1) 
		return true;
	else 
		return false;
}

bool isFull(Stack *stack) {
	if (stack->top == stack->size) 
		return true;
	else 
		return false;
}

