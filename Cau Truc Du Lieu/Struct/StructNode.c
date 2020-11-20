#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int ID ;
	struct Node * next;
} Node ;
Node * head;

Node * makeNode(int v){
	Node *p = (Node*)malloc(sizeof(Node));
	p->ID = v;
	p->next = NULL;
	return p;
}

Node * insert(Node * h, int v){ // insert number into struct pointer
	Node * p = makeNode(v);
	if (h == NULL)
		return p; 

	Node * q = h;
	while (q->next != NULL)
		q = q->next;

	q->next = p;
	return h;
}

Node * insertAfter(Node * h, int v, int u){
	Node * p = h;
	while(p != NULL) {
	    if (p->ID == u) break;
	    p = p->next;
	}

	if (p == NULL) return h;

	Node * x = makeNode(v);
	x->next = p->next;
	p->next = x;
	return h;
}

Node * insertBefore(Node * h, int v, int u){
	if ( h == NULL) return NULL;
	if ( h->ID == u){
		Node * x = makeNode(v);
		x->next = h;
		return x;
	}
	Node * p = h;
	while(p->next != NULL) {
	    if ( p->next->ID == u) break;
	    p = p->next;
	}

	if (p->next == NULL)	
		return h;

	Node * x = makeNode(v);
	x->next = p->next;
	p->next = x;
	return h;
}

Node * insertBeforeRecursive (Node *h, int v, int u){
	if ( h == NULL ) return NULL;
	if ( h->ID == u ){
		Node *p = makeNode(v);
		p->next = h;
		return p;
	}
	h->next = insertBeforeRecursive(h->next , v, u);
	return h;
}

// write not right yet.
Node * removeNode (Node * h, int v){
	// tao mot nut co ID = v, chen vao truoc nut co ID = u
    // tra ve con tro den dau danh sach moi

}


// remove value from stack by recursive function
Node * removeRecursive (Node * h, int v){
	if ( h == NULL) return NULL;
	if ( h->ID == v ) {
		Node * temp = h;
		h = h->next;
		free(temp);
		// return h;
	}
	h->next = removeRecursive(h->next , v);
	return h;
}

Node * removeValue(Node* h, int v){

	if ( h == NULL) return NULL;
	// remove the first value = v and free memory
	if ( h->ID == v ) {
		Node * temp = h;
		h = h->next;
		free(temp);
	}
	Node * p = h;
	while( h != NULL ) {
	    if ( h->next->ID == v ){
	    	Node * temp = h;
	    	h = h->next;
	    	free(temp);
	    }
	    h = h->next;
	}
	return h;
}

Node * reverse ( Node * h ){
	Node * temp ;
	Node * previous = NULL ;
	while( h != NULL) {
	    temp = h->next ;
	    h->next = previous ;
	    previous = h;
	    h = temp ;
	}
	return previous;
}

int sum(Node * h){
	int s = 0 ;
	while(h != NULL) {
		s = s + h->ID;
	    h =  h->next;
	}
	return s;
}

void printList(Node * h){
	Node * q = h;
	while(q != NULL) {
	    printf("%d ", q->ID );
	    q = q->next;
	}
	printf("\n");
}

void freeList(Node * h){
	Node *p;
	while(h != NULL) {
	    p = h;
	    h = h->next;
	    free(p);
	}
}

int main(int argc, char const *argv[])
{
	head = NULL;
	for (int i = 1; i <= 10; ++i)
		head = insert(head, i);

	// in head, add 12 after position 6
	head = insertAfter(head, 5, 6);
	// in head add 15 before position 9
	head = insertBefore(head, 5, 9);
	// add 20 before position 10 usijng Recursive function
	head = insertBeforeRecursive(head, 20, 10);

	// head = removeNode(head, 2);

	// remove value at position by recursive
	// head = removeRecursive(head, 2);

	printList(head);	

	head = removeRecursive(head, 5);
	// head = removeValue(head, 3);

	printList(head);

	printf("\nSum = %d\n", sum(head));

	// head = removeAll(head);
	// head = removeAll(head);
	head = reverse(head) ;
	printList(head);

	freeList(head);
	return 0;
}