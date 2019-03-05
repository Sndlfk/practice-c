#include "Queue.h"

Queue *new_queue(int size) {
	Queue *queue = malloc(sizeof(Queue));
	queue->arr = malloc(sizeof(size));

	queue->nItems = 0;
	queue->size = size;
	queue->front = 0;
	queue->rear = -1;
	return queue;
}

void push(Queue *queue, int item) {
	if (queue->rear == queue->size - 1)
		queue->rear = -1;
	queue->arr[++queue->rear] = item;
	queue->nItems++;
}

int pop(Queue *queue) {
	int temp = queue->arr[queue->front++];
	if (queue->front == queue->size)
		queue->front = 0;
	queue->nItems--;
	return temp;
}

void display(Queue *queue) {
	int start = queue->front;
	int it = 0;
	while (it < queue->nItems) {
		if (start == queue->size - 1){
			printf("%i ", queue->arr[start]);
			start = 0;
		}
		else 
			printf("%i ", queue->arr[start++]);
		it++;
	}
}

bool empty(Queue *queue) {
	if (queue->nItems == 0) 
		return true;
	else 
		return false;
}

bool full(Queue *queue) {
	if (queue->nItems == queue->size) 
		return true;
	else 
		return false;
}