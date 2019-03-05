#pragma once
#include "stdbool.h"
#include <stdio.h>

typedef struct {
	int size;	
	int rear;	//начало очереди
	int front;	//конец очереди
	int *arr;
	int nItems;
} Queue;

Queue *new_queue(int);
void push(Queue*, int);
int pop(Queue*);
void display(Queue*);
bool empty(Queue*);
bool full(Queue*);