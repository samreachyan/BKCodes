/*
	writer : YAN Samreach
	Lecture : Pham Quang Dung
	Subject : Cau Truc Du Lieu
	Year :: 15-04-2019

	Describe : check the symbols in stack with order symbols. () {} []
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
	char c;
	Node * next;
} Node;
Node * top;

void init(){
	top = NULL;
}

Node * makeNode (char v) {
	Node * p = (Node*)malloc(sizeof(Node));
	p->c = v;
	p->next = NULL;
	return p;
}

void push(char x){
	Node * p = makeNode(x);
	p->next = top;
	top = p;
}

int Empty(){
	if (top == NULL)
		return 1;
	else
		return 0;
//	return top = NULL;
}

char pop(){
	if (Empty()){
		printf("Stack is NULL\n");
		return ' ';
	}
	Node * p = top;
	char x = p->c ;
	top = p->next ;
	free(p);
	return x;
}

int match(char a , char b){
	if (a == '[' && b == ']') return 1;
	if (a == '(' && b == ')') return 1;
	if (a == '{' && b == '}') return 1;
	return 0;
}

int check(char *s){
	for (int i = 0; i < strlen(s); ++i) {
		if ( s[i] == '(' || s[i] == '[' || s[i] == '{')
			push(s[i]);
		else {
			if (Empty() )
				return 0;
			else {
				char a = pop();
				if (match(a, s[i]) == 0)
					return 0;
			}
		}
	}
	return Empty();
}

int main() {

	init();
	char * S = "({[]})()";
	if (check(S)) {
		printf("Check stack is OK\n");
	} else {
		printf("Check stack error!!\n");
	}
	getchar();
	return 0;
}
