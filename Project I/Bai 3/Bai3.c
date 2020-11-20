/*
	Professor : Pham Ngoc Hung
	Author : Yan Samreach
	Subject:  CTDL Project 1
	Date : 19/10/2019
*/
#include <stdio.h>
#include <stdlib.h>

int front = 0;
int rear = 0;
int top = -1;
int hoanvi = 1; // giá trị hoan vị ở đường C
//check for Queue
int isEmptyQueue(){
	return (front > rear);
}
int isFullQueue(int size){
	return ( rear == size );
}
void enqueue (int queue[], int size, int value) {
	if (isFullQueue(size)){
		// printf("\nQueue is full...\n");
		return;
	} else {
		queue[rear] = value;
		rear++;
		// printf("\nYou added %d to queue", value);
	}
}
void dequeue(int queue[]){
	if (isEmptyQueue()){
		printf("\nQueue is Empty...\n");
	} else {
		// printf("\nYou dequeue %d from queue", queue[front]);
		queue[front] = 0;
		front++;
	}
}
int Peek(int queue[]){
	return queue[front];
}
int topQueue(int queueA[]){
	return queueA[rear];
}

// chack for stack
int isEmptyStack(){
	return (top == -1);
}
int isFullStack(int size){
	return (top >= size-1);
}
void Push(int stack[], int size, int value){
	if(isFullStack(size)){
		// printf("\nStack is full...\n");
		return;
	} else {
		top++;
		stack[top] = value;
	}
}
// lấy giá trị ở trên bỏ ra 
void Pop(){
	if(isEmptyStack()){
		// printf("\nStack is Empty...\n");
		return;
	} else {
		top--;
	}
}
// lấy giá trị ở trên stack 
int Top(int stack[]){
	return stack[top];
}
// end stack
void Display(int queueA[], int size){
	for (int i = 0; i < size; ++i)
	{
		printf("( %d )-", queueA[i]);
	}
	printf("\n");
}

int main(int argc, char const *argv[]) {
	int size = 4;
	// printf("\nEnter number trains : ");
	// scanf("%d", &size);

	int queueA[size];
	int stackB[size];

	// enqueue(queueA, size, 1);
	// enqueue(queueA, size, 4);
	// enqueue(queueA, size, 3);
	// enqueue(queueA, size, 2);

	enqueue(queueA, size, 1);
	enqueue(queueA, size, 3);
	enqueue(queueA, size, 4);
	enqueue(queueA, size, 2);
	
	// for (int i = 0; i < size; ++i) {
	// 	int n;
	// 	printf("Enter value : ");
	// 	scanf("%d", &n)
	// 	enqueue(queueA, size, n);
	// }

	Display(queueA, size);

	int fnt;
	int count = 1;
	while( hoanvi <= size) {
		fnt = Peek(queueA);
		dequeue(queueA);

		if ( fnt == hoanvi ){
			hoanvi++;
			printf("\n%d) A => C : %d",count++, fnt);
		} 
		else {
			if (!isEmptyStack() && Top(stackB) < fnt) { 
                goto but;
            } else {
				Push(stackB, size, fnt);
				printf("\n%d) A => B : %d",count++, fnt);
			}
		}

		// pop from stack to new queue
		while (Top(stackB) == hoanvi) {
			printf("\n%d) B => C : %d",count++, Top(stackB));
			Pop();
			hoanvi++;
		}
	}

	// sai một trường hợp là  1 3 4 2
	but: printf("\nTrang Thai khong sap xep duoc nua...\n");
	return 0;
}