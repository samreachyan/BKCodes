#include <stdio.h>
#include <stdlib.h>

int front = 0;
int rear = 0;
int top = -1;
int hoanvi = 1; // giá trị hoan vị ở đường C
//check for Queue
int isEmptyQueue(){
	return (front < 0 || front > rear);
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
		top++;
	}
}
// lấy giá trị ở trên stack 
int Top(int stack[]){
	return stack[top];
}
// end stack
void action(int i){
	if (i == 1) printf("\nA -> C");
	if (i == 2) printf("\nA -> B");
	if (i == 3) printf("\nB -> C");
	if (i == 4) printf("\nB -> A");
}
int main(int argc, char const *argv[])
{
	int size;

	printf("\nEnter number of Trains : ");
	scanf("%d", &size);

	int queueA[size];
	int stackB[size];
	int queueC[size];

	enqueue(queueA, size, 1);
	enqueue(queueA, size, 4);
	enqueue(queueA, size, 3);
	enqueue(queueA, size, 2);
	// nhap vao gia tri cua trains
	// for (int i = 0; i < size; ++i) {
	// 	int n;
	// 	printf("\nEnter value of Train: ");
	// 	scanf("%d", &n);
	// 	enqueue(queueA, size, n);
	// }

	while( hoanvi <= size) {
		if ( !isEmptyQueue() && hoanvi == Peek(queueA) ){
			// enqueue(queueC, size, Peek(queueA));
			dequeue(queueA);
			action(1); // A-C
			++hoanvi;
		} else if ( hoanvi == Top(stackB) ){
			// enqueue(queueC, size, Top(stackB));
			Pop();
			action(3); // B-C
			++hoanvi;
		} else if (hoanvi != Peek(queueA) && !isEmptyQueue() && hoanvi != Top(stackB)) {
			Push(stackB, size, Peek(queueA));
			dequeue(queueA);
			action(2); // A-B
		}
		 else if (isEmptyQueue() && hoanvi == Top(stackB)) {
			enqueue(queueA, size, Top(stackB));
			Pop();
			action(4); // B-A
		}
		
	}


	// for (int hoanvi = 1; hoanvi <= size; ++hoanvi)
	// {
	// 	if ( hoanvi == Peek(queueA) && !isEmptyQueue() ){
	// 		// enqueue(queueC, size, Peek(queueA));
	// 		dequeue(queueA);
	// 		action(1); // A-C
	// 	} else if ( hoanvi == Top(stackB) ){
	// 		// enqueue(queueC, size, Top(stackB));
	// 		Pop();
	// 		action(3); // B-C
	// 	} else if (hoanvi != Peek(queueA) && !isEmptyQueue()) {
	// 		Push(stackB, size, Peek(queueA));
	// 		dequeue(queueA);
	// 		action(2);
	// 	}
	// 	 else {
	// 		enqueue(queueA, size, Top(stackB));
	// 		Pop();
	// 		action(4);
	// 	}
	// }



}