/* 
    Author : YAN Samreach
    Data: 4-10-2019
    Subject : Project 1, Linked in C program store Student Data
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien {
    char mssv[10];
    char hoten[30];
    char lop[10];
    float dtb;
    char sdt[15];
};
struct Node {
    struct sinhvien * data;
    struct Node * next;
};

Node * head;

Node * makeNode (sinhvien * ghi){
    Node * p = (Node*)malloc(sizeof(Node));
    if( p == NULL) return 0;
    p->data = ghi;
    p->next = NULL;
    return p;
}
sinhvien * createSV(){
    sinhvien * sv = (sinhvien*)malloc(sizeof(sinhvien));
    printf("Nhap ma SV: ");
    scanf("%s", sv->mssv); 
    printf("Nhap ten: ");  
    scanf("%s", sv->hoten);
    printf("Nhap lop: ");  
    scanf("%s", sv->lop);
    printf("Nhap diem tb: ");  
    scanf("%f", &sv->dtb);
    printf("Nhap so dien thoai : ");  
    scanf("%s", sv->sdt);
    return sv;
}
void insertHead(Node *& head, sinhvien * ghi){
    Node * p = makeNode(ghi);
    if( head == NULL) head = p;
    else {
        p->next = head;
        head = p;
    }
}
void insertTail(Node *& head, sinhvien * ghi){
    Node * p = makeNode(ghi);
    if( head == NULL) head = p;
    else {
        Node * tmp = head;
        while(tmp->next != NULL) tmp = tmp->next;
        tmp->next = p;
    }
}
char * XepLoai(float diem){
    if (diem >= 9) return "Suat sac";
    else if (diem >= 8) return "Gioi";
    else if (diem >= 7) return "Kha";
    else if (diem >= 5) return "Trung binh";
    else return "Truot";
}
void displayNameRank(Node * head){
    if ( head == NULL ) printf("\nDanh sach rong\n");
    else printf("Danh sach Sinh Vien theo HoTen va Xep loai");
    printf("\n+--------------------+----------+\n");
    printf("|%-20s|%-10s|\n", "Ho va Ten","Xep Loai");
    printf("+--------------------+----------+\n");
    for(Node * p = head ; p!= NULL ; p=p->next)
        printf("|%-20s|%-10s|\n", p->data->hoten ,XepLoai(p->data->dtb));
    printf("+--------------------+----------+\n");
}
void DisplayList(Node * head) {
    if ( head == NULL) printf("\nDanh sach rong\n");
    else printf("Danh sach SV la");
    printf("\n+----------+--------------------+----------+----------+---------------+\n");
    printf("|%-10s|%-20s|%-10s|%-10s|%-15s|\n","MSSV", "Ho va Ten","Lop Hoc","Diem TB","So dien thoai");
    printf("+----------+--------------------+----------+----------+---------------+\n");
    for (Node * p = head ; p!= NULL ; p=p->next){
        printf("|%-10s|%-20s|%-10s|%-10.2f|%-15s|\n",p->data->mssv, p->data->hoten, p->data->lop, p->data->dtb,p->data->sdt);
    }
    printf("+----------+--------------------+----------+----------+---------------+\n");
}

void SearchSV(Node *head){
    char name[30], lop[10];
    printf("\n---------Search sinh vien----------\n");
    printf("Enter ten : ");
    scanf("%s", name);
    printf("Enter lop : ");
    scanf("%s", lop);
    int kiemtra = 0;

    Node * tmp = head;
    while( tmp != NULL) {
        if(strcmp(tmp->data->hoten, name) == 0 && strcmp(tmp->data->lop, lop) == 0) { // if name = list name
            printf("\n--------> So dien thoai : %s\n", tmp->data->sdt);
            kiemtra = 1;
        }
        tmp = tmp->next;
    }
    if(kiemtra == 0) {
        printf("\n--------> Not found!!!\n");
    }
}

void freeLop(Node *& head, char * lop){
    Node * tmp, *p = head;
    while( head != NULL){
        if (strcmp(head->data->lop , lop) == 0) {
            tmp = head;
            head = head->next;
            free(tmp);
        } 
        else head = head->next;
    }
    head = p;
    // error after delete from list 
}
void DeleteByClass(Node *& head){
    char lop[10];
    printf("\n----------Delete by class-----------\n");
    printf("Enter class : ");
    scanf("%s", lop);
    freeLop(head, lop);
}

void swap (sinhvien *&sv1, sinhvien *&sv2){
    sinhvien * tmp = sv1;
    sv1 = sv2;
    sv2 = tmp;
}
void sortList(Node* head)  
{  
    Node* p = head;  
    while (p != NULL) {  
        Node* q = head;  
        while (q != NULL) {  
            if (p->data->dtb > q->data->dtb)  
                swap(p->data, q->data);  
            q = q->next;  
        }  
        p = p->next;  
    }  
}


int main(int argc, char const *argv[])
{
    sinhvien * ghi, *ghi2;

    ghi = createSV();
    ghi2 = createSV();
    insertHead(head , ghi);
    insertTail(head, ghi2);

    displayNameRank(head);
    DisplayList(head);

    sortList(head); // ok work

    SearchSV(head);

    DisplayList(head);
    DeleteByClass(head); // get error after deleted
    DisplayList(head);

    
    return 0;
}