#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
	int v;
	Stack * next;
	Stack * top;
}Stack;

Stack * Construct () {
	Stack * s;
	s = (Stack*)malloc(sizeof(Stack));
	if (s == NULL) {
		return NULL;
	}
	s->top = NULL;
	return s;
}

// this function on work, I dont know why too
int Emtpy(Stack *s){
	return (s->top == NULL );
}

int isFull() {
	printf("\nNo memory !! ");
	getchar();
	return 1;
}

void FreeMemory (Stack * s) {
	while(!Empty(s)) {
	    pop(s);
	}
	free(s);
}

int Push(Stack * s, int v){
	Stack * node;
	node = (Stack*)malloc(sizeof(Stack));
	if (node == NULL){
		isFull();
		return 1;
	}
	node->v = v;
	node->next = s->top;
	s->top = node;
	return 0;
}

int pop(Stack * s){
	int v;
	Stack* node ;
	if (Empty(s))
		return -10000;
	node = s->top;
	v = s->top;
	s->top = node->next;
	free(node);
	return v;
}

void disp(Stack*s){
	Stack * node;
	int ct = 0;
	int m;
	printf("\nDanh sach cac phan tu chua stack.\n\n");
	if(Empty(s)) {
		printf("Empty\n");
		getchar();
	} else {
		node = s->top;
		do {
			m = node->v;
			printf("%d \n", m);
			ct++;
			if (ct % 9 == 0 )
				printf("\n");
			node = node->next;
		}
		while(!(node == NULL));
		    printf("\n");
	}
}

int main(int argc, char const *argv[])
{
	int ch , n, i;
	int m;
	Stack * stackPtr;
	while(1) {
	    printf("--------------------------\n");
	    printf("Chuong trinh thu staack\n");
	    printf("--------------------------\n\n");

	    printf("1. Create\n2. Push \n3. Pop \n4. Display \n5. Exit");
	    printf("------------------------------\n");
	    printf("Options : ");
	    scanf("%d", &ch);
	    printf("\n\n");

	    switch(ch){
	    	case 1:
		    	printf("Create stack \n");
		    	stackPtr = Construct();
		    	break;
		    case 2: 
		    	printf("Vao gia tri phan tu : ");
		    	scanf("%d",&m);
		    	printf("\nPush value into stack\n");

		    	Push(stackPtr, m);
		    	break;
		    case 3: 
		    	m = pop(stackPtr);
		    	if ( m!= -10000) {
		    		printf("\nGia tri : %d\n",m );
		    		getchar();
		    	} else {
		    		printf("\nStack Empty\n");
		    		getchar();
		    	}
		    	break;
		    case 4: 
		    	disp(stackPtr);
		    	break;
		    case 5:
		    	exit(0);
		    	break;
		    default :
		    	printf("\n--- invalid input \n");
	    }
	}
	return 0;
}