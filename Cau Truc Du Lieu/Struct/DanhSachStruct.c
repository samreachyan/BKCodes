/*
	Describe : Node connect to another node by next and value
	Time : 
	Resource : BOOK CTDL
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int ElementType;
struct Node {
	ElementType value;
	Node * next;
};
typedef struct Node LIST;

Node * insert_Head (Node *first, ElementType x);
Node * insert_Middle (Node *pred, ElementType x);
Node * insert_Last (Node * first, ElementType x);
Node * Delete_Head (Node * first);
Node * insert_Last (Node * first, ElementType x);

ElementType Delete(Node * pred);
void PrintList(Node * first);
int IsEmpty(Node * first);
Node * MakeNull ( Node * first);


int main(int argc, char const *argv[])
{
	Node * S1, *S2, *S3, *V1, *V2, *V3;
	ElementType a;
	int i, n;
	S1 = NULL;
	srand(time(NULL));
	//a = rand() % 100;
	S1 = insert_Head(S1, 1);
	

	V1 = S1;
	for (int i = 2; i <= 10; ++i) {
		//a = rand() % 100;
		V1 = insert_Middle(V1, i);
	}

	printf("=== > Danh sach ban dau : \n");
	PrintList(S1);
	printf("\n");

	printf("=== > Danh sach ban dau : \n");
	V1 = insert_Last(V1, 4);
	V1 = Delete_Head(V1);
	PrintList(S1);
	printf("\n");

	// V1 = S1; S2 = NULL; S3 = NULL;
	// while (V1){
	// 	if (V1->value > 0)
	// 		if (!S2) {
	// 			S2 = insert_Head(S2, V1->value);
	// 			V2 = S2;
	// 		} else {
	// 			insert_Middle (V2, V1->value) ;
	// 			V2 = V2->next ;
	// 		}
	// 	if (V1->value < 0 )
	// 		if ( !S3 ){
	// 			S3 = insert_Head(S3, V1->value);
	// 			V3 = S3;
	// 		} else {
	// 			insert_Middle(V3, V1->value) ;
	// 			V3 = V3->next ;
	// 		}
	// }

	// printf("=== > Danh sach so duong : \n");
	// PrintList(S2);
	// printf("=== > Danh sach so am : \n");
	// PrintList(S3);

	MakeNull(S1);
	// MakeNull(S2);
	// MakeNull(S3);
	
	getchar();
	return 0;
}

Node * insert_Head (Node * first, ElementType x){
	Node * tempNode = (Node*)malloc(sizeof(Node));
	tempNode->value = x;
	tempNode->next = first;
	first = tempNode;
	return first;
}

Node * insert_Middle (Node * pred, ElementType x){
	Node * tempNode;
	tempNode = (Node*)malloc(sizeof(Node));
	tempNode->value = x;
	tempNode->next = pred->next;
	pred->next = tempNode;
	return tempNode;
}

Node * insert_Last (Node * first, ElementType x){
	Node * NewNode, *tempNode ;
	NewNode = (Node*)malloc(sizeof(Node));
	NewNode->value = x;
	tempNode = first;
	while( tempNode->next != NULL ) {
	    tempNode = tempNode->next;
	}

	tempNode->next = NewNode;
	return first;
}

ElementType Delete(Node *pred){
	ElementType x;
	Node * tempNode;
	tempNode = pred->next;
	pred->next = pred->next->next;
	x = tempNode->value;
	free(tempNode);
	return x;
}


Node * Delete_Head (Node * first){
	Node * tempNode;
	tempNode = first->next;
	free(first);
	return tempNode;
}

Node * Delete_Last(Node * first){
	Node * tem1, *tem2;
	tem1 = first;
	tem2 = first;

	while(tem1->next != NULL) {
	    tem2 = tem1;
	    tem1 = tem1->next;
	}
	tem2->next = NULL;
	free(tem1);
	return first;
}

int IsEmpty(Node * first){
	return !first;
}

Node * MakeNull (Node * first){
	while (!IsEmpty(first))
		first = Delete_Head(first);

	return first;
}

void PrintList(Node * first){
	Node * tempNode;
	tempNode = first;
	int i = 0 ;
	while(tempNode){
		printf("%d ", tempNode->value );
		i++;
		tempNode = tempNode->next;
		if (i%12 == 0 )	printf("\n");
	}
	printf("\n");
}