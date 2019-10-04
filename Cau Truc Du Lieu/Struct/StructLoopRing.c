/* 
    Môn : cấu trúc dữ liệu 
    Wrote: samreach
    web : nguyenvinhhieu.vn
    Nội dùng : danh sách liên kết vòng đôi
    Ngày : 26-09-2019
*/

#include <stdio.h>
#include <stdlib.h>
 
struct node{
    int data;
    struct node *llink;
    struct node *rlink;
};
 
typedef struct node *Node;
 
Node CreateNode(int data){
    Node temp = (Node) malloc(sizeof(struct node));
    temp->llink = temp;
    temp->rlink = temp;
    temp->data = data;
    return temp;
}
void DeleteNode(Node temp)
{
    printf("%d deleted\n", temp->data);
    free(temp);
    return;
}
 
void InsertFront(Node head, int data)
{
    Node newNode = CreateNode(data);
    Node first = head->rlink;
    head->rlink = newNode;
    newNode->rlink = first;
    newNode->llink = head;
    if(first !=NULL)
        first->llink = newNode;
}
void DeleteRear(Node head)
{
    if(head->rlink == head)
    {
        puts("List is empty");
        return;
    }
    Node last = head->llink;
    Node slast = last->llink;
    slast->rlink = head;
    head->llink = slast;
    DeleteNode(last);
}
void Display(Node head)
{
    Node current = head->rlink;
    if(current == head)
    {
        puts("List is empty");
        return;
    }
    puts("Contents of the Circular Doubly Linked list are");
    while(current!=head)
    {
        printf("%d ", current->data);
        current = current->rlink;
    }
    puts("");
}
 
int main()
{
    int choice, ex=0, data;
    Node head = CreateNode(0);
    while(!ex)
    {
        printf("Enter your choice\n1 Insert front\n2 Delete rear\n3 Display\n4 Exit\n>>> ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter the data: ");
                scanf("%d", &data);
                InsertFront(head, data);
                break;
            case 2:
                DeleteRear(head);
                break;
            case 3:
                Display(head);
                break;
            default:
                ex=1;
        }
    }
    return 0;
}