// C program for array implementation of queue 
#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 

// A structure to represent a queue 
typedef struct Queue 
{ 
	int front, rear, size; 
	unsigned capacity; 
	int* array; 
} Queue ; 

// function to create a queue of given capacity. 
// It initializes size of queue as 0 
Queue * createQueue(unsigned capacity) { 
	Queue* queue = (Queue*)malloc(sizeof(Queue)); 
	queue->capacity = capacity; 
	queue->front = queue->size = 0; 
	queue->rear = capacity - 1; // This is important, see the enqueue 
	queue->array = (int*) malloc(queue->capacity * sizeof(int)); 
	return queue; 
} 

// Queue is full when size becomes equal to the capacity 
int isFull(struct Queue* queue) 
{ return (queue->size == queue->capacity); } 

// Queue is empty when size is 0 
int isEmpty(struct Queue* queue) 
{ return (queue->size == 0); } 

// Function to add an item to the queue. 
// It changes rear and size 
void enqueue(Queue* queue, int item) // this function add value into queue
{ 
	if (isFull(queue)) 
		return; 
	queue->rear = (queue->rear + 1)%queue->capacity; 
	queue->array[queue->rear] = item; 
	queue->size = queue->size + 1; 
	printf("%d enqueued to queue\n", item); 
} 

// Function to remove an item from queue. 
// It changes front and size 
int dequeue(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	int item = queue->array[queue->front]; 
	queue->front = (queue->front + 1)%queue->capacity; 
	queue->size = queue->size - 1; 
	return item; 
} 

// Function to get front of queue 
int front(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->front]; 
} 

// Function to get rear of queue 
int rear(Queue* queue) 
{ 
	if (isEmpty(queue)) 
		return INT_MIN; 
	return queue->array[queue->rear]; 
} 

// Free memory for queue after running codes
void FreeMemory(Queue * queue){
	
}

// Driver program to test above functions./ 
int main() 
{ 
	Queue* queue = createQueue(1000); 

	enqueue(queue, 10); 
	enqueue(queue, 20); 
	enqueue(queue, 30); 
	enqueue(queue, 40); 

	printf("%d dequeued from queue\n\n", dequeue(queue)); 

	printf("Front item is %d\n", front(queue)); 
	printf("Rear item is %d\n", rear(queue)); 

	return 0; 
} 
