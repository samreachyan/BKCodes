/* 
	Professor : Pham Ngoc Hung 
	Writher : YAN Samreach
	Subject : Project I (Bai 2).
	Title : Student Management with Link list
	Data : 10/10/2019

*/
#include <stdio_ext.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct Node {
    char ten[20];
    char MSSV[10];
    float dtb;
    char lop[10];
    char sdt[15];
    struct Node * next;
};
struct Node * head;

Node * makeNode (){
	Node * h = (Node*)malloc(sizeof(Node));
	printf("Enter MSSV : ");
	scanf("%s", h->MSSV);
	printf("Enter name : ");
	scanf("%s", h->ten);
	printf("Enter score : ");
	scanf("%f", &h->dtb);
	printf("Enter Class : ");
	scanf("%s", h->lop);
	printf("Enter so dien thoai : ");
	scanf("%s", h->sdt);
	return h;
}
Node * insertHead(Node * h, Node * moi){
	if ( h == NULL) return moi;
	moi->next = h;
	h = moi;
	return h;
}
Node * insertTail(Node * h, Node * moi){
	if ( h == NULL) return moi;
	Node * tmp = h;
	while(tmp->next != NULL){
		tmp = tmp->next;
	}
	tmp->next = moi;
	return h;
}

void search(Node * h){
	char name[20], lop[10];
	int kiemtra = 0;
	printf("Enter name : "); 
	scanf("%s", name);
	printf("Enter Class : ");
	scanf("%s", lop);
	Node * p = h;
	while(p != NULL){
		if ( strcmp(p->ten , name) == 0 && strcmp(p->lop, lop)== 0){
			printf("\n--------> So dien thoai : %s\n", p->sdt);
            kiemtra = 1;
		}
		p = p->next;
	}
	if (kiemtra == 0){
		printf("\n--------> Student not Found!!!\n");
	}
}

void swapString(char *sv1,  char *sv2){
    char tmp[30] = "";
    strcpy(tmp, sv1);
    strcpy(sv1, sv2);
    strcpy(sv2,tmp);
}

void swap (float *sv1,  float *sv2){
    float tmp = *sv1;
    *sv1 = * sv2;
    *sv2 = tmp;
}
Node * sortList(Node * h)  
{  
    Node* p = h;  
    while (p != NULL) {  
        Node* q = h;  
        while (q != NULL) {  
            if (p->dtb > q->dtb) {
                swapString(p->ten, q->ten); 
                swapString(p->MSSV, q->MSSV); 
                swap(&p->dtb, &q->dtb); 
                swapString(p->lop, q->lop); 
                swapString(p->sdt, q->sdt);
            }
            q = q->next;
        }  
        p = p->next;  
    }
    printf("\nSort already...\n");
    return h;
}

Node * deleteLop(Node * h, char * lop){
	
	// if (h == NULL) return NULL;
	// if ( strcmp(h->lop, lop) == 0){
	// 	Node * tmp = h;
	// 	h=h->next;
	// 	free(tmp);
	// }
	// while(h != NULL){
	// 	if ( strcmp(h->lop, lop)== 0){
	// 		Node * tmp = h;
	// 		h = h->next;
	// 		free(tmp);
	// 	}
	// 	else h = h->next;
	// }

	// error after delete class at the last position
	// don't know why...???
	if ( h == NULL) return NULL;
	if ( strcmp(h->lop, lop)==0 ) {
		Node * temp = h;
		h = h->next;
		free(temp);
	}
	h->next = deleteLop(h->next , lop);
	return h;
}

char * XepLoai(float diem){
    if (diem >= 9) return "Suat sac";
    else if (diem >= 8) return "Gioi";
    else if (diem >= 7) return "Kha";
    else if (diem >= 5) return "Trung binh";
    else return "Truot";
}
void displayListRank(Node * h){
	if (h == NULL) printf("Danh sach rong!!\n");
	else {
		printf("Danh sach Sinh Vien theo HoTen va Xep loai");
	    printf("\n+--------------------+----------+\n");
	    printf("|%-20s|%-10s|\n", "Ho va Ten","Xep Loai");
	    printf("+--------------------+----------+\n");
		    for(Node * p = h ; p!= NULL ; p=p->next)
		        printf("|%-20s|%-10s|\n", p->ten ,XepLoai(p->dtb));
	    printf("+--------------------+----------+\n");
	}
}

void displayList(Node * h){
	if ( h == NULL) printf("\nDanh sach rong\n");
    else {
    	printf("Danh sach SV la");
	    printf("\n+----------+--------------------+----------+----------+---------------+\n");
	    printf("|%-10s|%-20s|%-10s|%-10s|%-15s|\n","MSSV", "Ho va Ten","Lop Hoc","Diem TB","So dien thoai");
	    printf("+----------+--------------------+----------+----------+---------------+\n");
	    for (Node * p = h; p!= NULL ; p=p->next){
	        printf("|%-10s|%-20s|%-10s|%-10.2f|%-15s|\n",p->MSSV, p->ten, p->lop, p->dtb,p->sdt);
	    }
    	printf("+----------+--------------------+----------+----------+---------------+\n");
    }
}


Node * readFile(char * fname){
	Node * h;
	Node * ghi = (Node*)malloc(sizeof(Node));
	FILE * f = fopen("student.INP", "r");
	if ( f == NULL){
		printf("No file opened ... !!\n");
	} else {
		char MSSV[10];
		char ten[30];
		float dtb;
		char lop[10];
		char sdt[15];
		while( !feof(f)){
			// cannot store link data on head becuase error function
			fscanf(f, "%s %s %f %s %s ", ghi->MSSV, ghi->ten, &ghi->dtb, ghi->lop, ghi->sdt);
			printf("%s %s %.2f %s %s\n",ghi->MSSV, ghi->ten, ghi->dtb, ghi->lop, ghi->sdt );
			printf("\nOK copied\n");
			if(h==NULL) h=ghi;
			while(h!= NULL) h=h->next;
			h=ghi;
		}
		fclose(f);
	}
	printf("\nDone\n");
	return h;
}
void saveFile(Node * h){
	FILE * f = fopen("student.OUT", "w");
	Node * p = h;
	while(p != NULL){
		fprintf(f, "%s %s %.2f %s %s\n",p->MSSV, p->ten,p->dtb,p->lop, p->sdt );
		p=p->next;
	}
	fclose(f);
}


int main(int argc, char const *argv[]) {
	// head = NULL;
	// Node * moi;
	// moi = makeNode();
	// head = insertHead(head, moi);
	// moi = makeNode();
	// head = insertHead(head, moi);
	// moi = makeNode();
	// head = insertHead(head, moi);

	// // moi = makeNode();
	// // head = insertTail(head, moi);

	// displayList(head);

	// char lop[10];
	// printf("Delete class : ");
	// scanf("%s", lop);
	// head = deleteLop(head, lop);

	// // head = sortList(head); // ok
	// // search(head); // ok

	// displayListRank(head);
	// displayList(head);

	head = NULL;
	Node * moi;
	int chon;
	do
	{
		system("clear");
		printf("0. Exit Program\n");  
        printf("1. Add student at head\n");  
        printf("2. Add studnet at tail\n");  
        printf("3. Search students\n");  
        printf("4. Sorted students\n");
        printf("5. Delete student by Class\n");   
        printf("6. Display students detail\n");  
        printf("7. Display rank students\n");
        printf("8. Save data to file\n");
        printf("9. Read file from Student.inp\n");
        printf("-----------------------------------------------\n");  
        printf("Enter you options : ");
        scanf("%d", &chon); 
        switch(chon){
        	case 0 : 
        		exit(1);
        		break;
        	case 1 : 
        		system("clear");
        		moi = makeNode();
        		head = insertHead(head, moi);
        		printf("You inserted data successfully...\n");
        		getchar();
        		getchar();
        		break;
        	case 2 : 
        		system("clear");
        		moi = makeNode();
        		head = insertTail(head, moi);
        		printf("You inserted data successfully...\n");
        		getchar();
        		getchar();
        		break;
        	case 3 : 
        		system("clear");
        		search(head);
        		getchar();
        		getchar();
        		break;
        	case 4 : 
        		system("clear");
        		head = sortList(head);
        		displayList(head);
        		getchar();
        		getchar();
        		break;
        	case 5 : 
        		system("clear");
        		char lop[10];
				printf("Delete class : ");
				scanf("%s", lop);
        		deleteLop(head,lop);
        		getchar();
        		break;
        	case 6 : 
        		system("clear");
        		displayList(head);
        		getchar();
        		getchar();
        		break;
        	case 7 :
        		system("clear");
        		displayListRank(head);
        		getchar();
        		getchar();
        		break;
        	case 8 : 
        		system("clear");
        		saveFile(head);
        		getchar();
        		printf("You stored data on << student.OUT >>\n");
        		getchar();
        		break;
        	case 9 : 
        		system("clear");
        		head = readFile("student.INP");
        		getchar();
        		printf("You read file successfully\n");
        		getchar();
        		break;

        	default:
        		printf("You input invalid number.\n");
        		getchar();
        		getchar();

        }
	} while (1);

}