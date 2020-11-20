/* 
	Describe : Connect Stack to another stack, in one stack there is a value and
			   connected pointer in the struct.
	Date : 09-04-2019
	Writer : Yan Samreach
	Lecture : Youtube, research
*/

// this is 

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data; 
	Node * next;
} Node;

typedef struct stack{
	Node * top;
} STACK;

// Khoi Tao Stack
void init (STACK &s){
	s.top = NULL;
}

// Khoi tao node 
Node * makeNode (int x){
	Node * p = (Node*)malloc(sizeof(Node));
	if (p == NULL){
		printf("Khong co gi trong STACK!!\n");
		return NULL ;
	}
	p->data = x;
	p->next = NULL;
	return p;
}

int isEmpty(STACK s){
	if (s.top == NULL){
		return 1;
	}
	return 0;
}

// add value to stack
int Push(STACK &s, Node *p){
	
	if ( p == NULL){
		return 0;
	}
	
	if (isEmpty(s) == 1){
		s.top = p; // node p chinh la node dau STack
	} else {
		p->next = s.top;
		s.top = p; 
	}
	return 1;
}

int Pop(STACK &s, int &v){ // take value from stack
	
	if (isEmpty(s) == 1){
		return 0;
	} else {
		Node * p = s.top;
		v = p->data;
		s.top = s.top->next;
		free(p);
	}
	return 1; // take value successfully.
}

// check top value of STack
int Top(STACK &s, int &v){
	if (isEmpty(s) == 1){
		return 0;
	}
	
	v = s.top->data;
	return 1;
}

//ham xuat hien cac phan tu trong stack
void PrintStack(STACK s){
	while(isEmpty(s) == 0){
		int x;
		Pop(s, x);
		printf("%d ", x);
	}
	
	if (isEmpty(s) == 1) {
		printf(" \n == Clean stack ===");
	} else {
		printf("\n == Not Clean ===\n");
	}
}

//ham nhap danh sach vao stack
void InsertStack(STACK &s){
	int choice ;
	
	while(1){
		system("clear");
		printf("\n\t ===================");
		printf("\n1. Insert stack ");
		printf("\n2. View stack - pop ");
		printf("\n3. View stack - top ");
		printf("\n4. Exit "); 
		printf("\n\t ===================");
		printf("\n\n\t Choice : ");
		scanf("%d", &choice);
		if (choice == 1){
			int value;
			printf("\nEnter value : ");
			scanf("%d", &value);
			Node * p = makeNode(value);
			Push(s, p);
		} else if ( choice == 2) {
			PrintStack(s);
			getchar();
			getchar();
		} else if ( choice == 3) {
			int x;
			Top(s, x);
			printf("\n Top stack = %d", x);
			getchar();
			getchar();
		} else {
			break;
		}
	}
	
}

int main(){
	STACK s;
	init(s);
	
	InsertStack(s);
	
	getchar();
	
}
