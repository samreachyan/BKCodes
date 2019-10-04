#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
	int ID;
	char Name[20];
	char Class[10];
	char Phone[15];
	float Score;
}Student;

void NhapSV(Student * sv){
	printf("\nNhap ID : ");
	scanf("%d",&sv->ID);
	printf("\nNhap Name : ");
	scanf("%s",sv->Name);
	printf("\nNhap Class : ");
	scanf("%s",sv->Class);
	printf("\nNhap Phone : ");
	scanf("%s",sv->Phone);
	printf("\nNhap Score : ");
	scanf("%f",&sv->Score);
}

void DisplaySV (Student* sv){
	printf("\nMSSV : %d",sv->ID);
	printf("\nName : %s",sv->Name);
	printf("\nClass : %s",sv->Class);
	printf("\nPhone : %s",sv->Phone);
	printf("\nScore : %f",sv->Score);
}

typedef struct Node {
	student data;
	Node * next;
} NODE;
NODE * head;


NODE * makeNode (Student sv){
	NODE * p = (NODE*)malloc(sizeof(NODE));
	p->data = sv;
	p->next = NULL;
	return p;
}
NODE * AddHead(Student sv) {
	NODE * p = makeNode(sv);
	if (head == NULL) {
		head = p;
	} else {
		p->next = head;
		head = p;
	}
}
void DisplayList (NODE * head) {
	NODE * current = head;
	// while ( current != NULL ){
	// 	printf("%10d%15s%10s%15s%7.2f\n", current->ID,current->Name, current->Class, current->Phone, current->Score);
	// 	current = current->next;
	// }
	while(current != NULL){
		DisplaySV(current->data);
		printf("\n");
		current = current->next;
	}
}


// not work
int main(int argc, char const *argv[])
{
	printf("Hello\n");
	head = NULL;
	student sv1;
	NhapSV(sv1);
	AddHead(sv1);
	DisplaySV(sv1);
	return 0;
}