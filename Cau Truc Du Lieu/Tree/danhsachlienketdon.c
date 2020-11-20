#include <stdio.h>

typedef struct Node{
    int ID;
    struct Node* next;
}Node;

Node *head;

Node* makeNode(int v){
    Node* p = (Node*)malloc(sizeof(Node));
    p->ID = v;
    p->next  = NULL;
    return p;
}
Node* insertLast(Node* h, int v){
    // tao ra mot nut moi co dinh danh v
    // chen vao cuoi danh sach co con tro dau la h
    // tra ve con tro tro den dau cua danh sach thu duoc
    Node* p = makeNode(v);
    if(h == NULL){
        return p;
    }
    Node* q = h;
    while(q->next != NULL){
        q = q->next;
    }
    q->next  = p;
    return h;
}
Node* insertAfter(Node* h, int v, int u){
    // tao mot nut co ID = v, chen vao sau nut co ID = u
    // tra ve con tro den dau danh sach moi
    Node* p = h;
    while(p != NULL){
        if(p->ID == u) break;
        p = p->next;
    }
    if(p == NULL){
        return h;
    }
    Node* x = makeNode(v);
    x->next = p->next;
    p->next = x;
    return h;
}
Node* insertBeforeRecursive(Node* h, int v, int u){
    if(h == NULL) return NULL;
    if(h->ID == u){
        Node* p = makeNode(v);
        p->next = h;
        return p;
    }
    h->next = insertBeforeRecursive(h->next,v,u);
    return h;
}

Node* insertBefore(Node* h, int v, int u){
    // tao mot nut co ID = v, chen vao truoc nut co ID = u
    // tra ve con tro den dau danh sach moi
    if(h == NULL) return NULL;
    if(h->ID == u){
        Node* x = makeNode(v);
        x->next = h;
        return x;
    }
    Node* p = h;
    while(p->next != NULL){
        if(p->next->ID == u) break;
        p = p->next;
    }
    if(p->next == NULL){
        return h;
    }
    Node* x = makeNode(v);
    x->next = p->next;
    p->next = x;
    return h;
}

Node* removeNode(Node* h, int v){
    // loai bo nut co ID = v khoi danh sach con tro dau la h
    // tra ve con tro den dau danh sach moi thu duoc
}
void printList(Node* h){
    Node* q = h;
    while(q != NULL){
        printf("%d ",q->ID);
        q = q->next;
    }
}
void freeList(Node* h){
    Node* p;
    while(h != NULL){
        p = h;
        h = h->next;
        free(p);
    }
}
int main(){
    head = NULL;

    for(int i = 1; i <= 10; i++)
        head = insertLast(head,i);

    head = insertBeforeRecursive(head,12,1);

    printList(head);

    freeList(head);
}
