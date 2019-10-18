#include <stdio.h>
#include <stdlib.h>

int size = 5;
int front = 0;
int rear = 0;
int queue[5];

int isEmpty(){
    return (front < 0 || front > rear);
}
int isFull(){
    return ( rear == size );
}
void enqueue (int value) {
    if (isFull()){
        printf("\nQueue is full...\n");
        return;
    }
    queue[rear] = value;
    rear++;
    printf("\nYou added %d to queue", value);
}
void dequeue(){
    if (isEmpty()){
        printf("\nQueue is Empty...\n");
        return;
    }
    printf("\nYou dequeue %d from queue", queue[front]);
    queue[front] = 0;
    front++;

}
int Peek(){
    return queue[front];
}

int main(int argc, char const *argv[])
{
    enqueue(2);
    enqueue(5);
    enqueue(3);
    enqueue(8);
    enqueue(10);
    printf("\nPeek of queue %d", Peek());
    dequeue();
    printf("\nPeek queue %d\n",Peek() );
    dequeue();
    printf("\nPeek queue %d\n",Peek() );
}