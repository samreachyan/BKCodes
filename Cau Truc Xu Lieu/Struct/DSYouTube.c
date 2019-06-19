#include <stdio.h>

typedef struct Node {
	int data;
	struct Node * next;
}NODE ;

typedef struct list {
	NODE *pHead;
	NODE *pTail;	
}LIST;

void Create(LIST &l){
	l.pHead = NULL;
	l.pTail = NULL;
}

NODE * makeNode(int v){
	NODE * p = new NODE;
	if (p == NULL){
		printf("\nNODE not create yet!! \n");
		return NULL;
	}
	p->data = v ;
	p->next = NULL;
	return p;
}

NODE * insertFirst (LIST &l, NODE * p){
	if (l.pHead == NULL){
		l.pHead = l.pTail = p;
	} else {
		p->next = l.pHead;
		l.pHead = p;
	}
}

NODE * insertLast (LIST &l, NODE * p){
	if (l.pHead == NULL){
		l.pHead = l.pTail = p;
	} else {
		l.pTail->next = p ;
		l.pTail = p; 
	}
}

void XuatDanhSach(LIST l){
	NODE * p = l.pHead;
	while( p != NULL ) {
	    printf("%d ", p->data );
	    p = p->next;
	}
	
	printf("\n");
}

int main(int argc, char const *argv[])
{
	/* code */
	LIST l;
	Create(l);

	for (int i = 1; i <= 10; ++i)
	{
		NODE * p = makeNode(i);
		insertFirst(l, p);
	}

	XuatDanhSach(l);
	return 0;
}