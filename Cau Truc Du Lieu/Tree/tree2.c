#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int ID;
    struct Node* leftMostChild;
    struct  Node* rightSibling;
}Node;

Node* root;

Node* find(Node* r, int id){
    // tim va tra ve con tro tro den nut co dinh danh id tren cay goc r
    if(r == NULL) return NULL;
    if(r->ID == id) return r;
    Node* p  = r->leftMostChild;
    while(p != NULL){
        Node* q = find(p,id);
        if(q != NULL) return q;
        p = p->rightSibling;
    }
    return NULL;
}

Node* makeNode(int id){
    Node* p = (Node*)malloc(sizeof(Node));
    p->ID = id;
    p->leftMostChild = NULL;
    p->rightSibling = NULL;
    return p;
}
void insertChild(Node* p, int id){
    // tao ra nut moi co dinh danh id, chen vao cuoi ds nut con cua nut p
    if(p == NULL) return;
    Node* q = makeNode(id);
    Node* x = p->leftMostChild;
    if(p->leftMostChild == NULL){
        p->leftMostChild = q; return;
    }
    while(x->rightSibling != NULL)
        x = x->rightSibling;
    x->rightSibling = q;
}
void insert(Node* r, int u, int id){
    // tao ra 1 nut moi co dinh danh id, chen vao cuoi ds nut con cua nut dinh danh u
    // tren cay co goc r
    Node* p = find(r,u);
    insertChild(p,id);
}
void printTree(Node* r){
    // hien thi cac nut tren cay goc r (moi nut hien thi nut con)
    if(r == NULL) return;
    Node* p = r->leftMostChild;
    printf("%d : ",r->ID);
    while(p != NULL){
        printf("%d ",p->ID);
        p = p->rightSibling;
    }
    printf("\n");

    p = r->leftMostChild;
    while(p != NULL){
        printTree(p);
        p = p->rightSibling;
    }
}
int count(Node* r){
    if(r == NULL) return 0;
    int cnt = 1;// dem nut goc
    Node* p = r->leftMostChild;
    while(p != NULL){
        cnt += count(p);
        p = p->rightSibling;
    }
    return cnt;
}
int countLeaves(Node* r){
    // dem so nut la tren cay goc r
    if(r == NULL) return 0;
    if(r->leftMostChild == NULL) return 1;
    int cnt = 0;
    Node* p = r->leftMostChild;
    while(p != NULL){
        cnt += countLeaves(p);
        p = p->rightSibling;
    }
    return cnt;
}
void preOrder(Node* r){
    if(r == NULL) return;
    printf("%d ",r->ID);
    Node* p = r->leftMostChild;
    while(p != NULL){
        preOrder(p);
        p = p->rightSibling;
    }
}
void inOrder(Node* r){
    if(r == NULL) return;
    Node* p = r->leftMostChild;
    inOrder(p);
    printf("%d ",r->ID);
    if(p == NULL) return;
    p = p->rightSibling;
    while(p != NULL){
        inOrder(p);
        p = p->rightSibling;
    }
}
void postOrder(Node* r){
    if(r == NULL) return;
    Node* p = r->leftMostChild;
    while(p != NULL){
        postOrder(p);
        p = p->rightSibling;
    }
    printf("%d ",r->ID);
}
int height(Node* p){
    if(p == NULL) return -1;
    int maxH = 0;
    Node* q = p->leftMostChild;
    while(q != NULL){
        int h = height(q);// tinh do cao cua nut con q
        maxH = maxH < h ? h : maxH; // cap nhat do cao maxH
        q = q->rightSibling;
    }
    return maxH + 1;
}
int heightID(Node* r, int id){
    // tra ve do cao cua 1 nut dinh danh id tren cay
    Node*  p = find(r,id);
    return height(p);
}

Node* parent(Node*r, int id){
    if(r == NULL) return NULL;
    if(r->ID == id) return NULL;
    Node* q = r->leftMostChild;
    while(q != NULL){
        if(q->ID == id) return r;
        Node* p = parent(q,id);
        if(p != NULL) return p;
        q = q->rightSibling;
    }
    return NULL;
}
int depth(Node* r, int id, int d){
    // tinh do sau cua nut p, d la do sau cua nut goc r
    if(r == NULL) return -1;
    if(r->ID == id) return d;
    Node* q = r->leftMostChild;
    while(q != NULL){
        //if(q->ID == id) return d+1;
        int dq = depth(q,id,d+1);
        if(dq>0) return dq;
        q = q->rightSibling;
    }
    return -1;
}
int depthID(Node* r, int id){
    return depth(r,id,1);
}
void freeTree(Node* r){
    // giai phong bo nho
    if(r == NULL) return;
    if(r->leftMostChild == NULL) free(r);
    else{
        Node* p = r->leftMostChild;
        while(p != NULL){
            Node* tmp = p->rightSibling;
            freeTree(p);
            p = tmp;
        }
    }
}
int main(){
    root = makeNode(10);
    insert(root,10,11);
    insert(root,10,1);
    insert(root,10,3);

    insert(root,11,5);
    insert(root,11,4);

    insert(root,3,8);
    insert(root,3,2);
    insert(root,3,7);

    insert(root,4,6);
    insert(root,4,9);

    printTree(root);
    printf("So nut tren cay = %d, so nut la = %d \n", count(root), countLeaves(root));

    printf("in-order: "); inOrder(root); printf("\n");

    printf("height(800) = %d\n",heightID(root,800));
    printf("depth(3) = %d\n",depthID(root,3));
    Node* p = parent(root,2);
    if(p == NULL) printf("Parent NULL\n"); else printf("Parent = %d\n",p->ID);

    freeTree(root);
    root = NULL;
}
