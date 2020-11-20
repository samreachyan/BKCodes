/* 
	writer : YAN Samreach
	Lecture : Pham Quang Dung
	Subject : Cau Truc Du Lieu
	Year :: 07-05-2019

	Describe : Giai thuat toan tren cay cua thay Pham Quang Dung.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int id;
	Node * left;
	Node * right;
} root; // con tro tro den nut goc

Node * createNode (int v){
	Node * root = (Node*)malloc(sizeof(Node));
	root->id = v;
	root->left = NULL;
	root->right = NULL;
	return root;
}

Node * insertLeft (Node * root , int value){
	root->left = createNode(value);
	return root->left;
}

Node * insertRight (Node * root, int value ) {
	root->right = createNode(value);
	return root->right;
}

Node * find (Node * root, int v) {
	if ( root == NULL ) return NULL;
	if ( root->id == v) return root;
	Node * p = root->left;
	while(p != NULL) {
	    Node * h = find(p,v);
	    if ( h != NULL ) return h;
	    p = p->right;
	}
	return NULL;
}

// void preOrder(Node * root){
// 	if ( root == NULL) return;
// 	printf("%d ", root->id );
// 	Node * p = root->left;
// 	while(p != NULL) {
// 	    preOrder(p);
// 	    p = p->right;
// 	}
// }
// void inOrder(Node * root){
// 	if ( root == NULL) return;
// 	Node * p = root->left;
// 	inOrder(p);
// 	printf("%d ", root->id );
// 	if (p != NULL)
// 		p = p->right;
// 	while(p != NULL) {
// 	    inOrder(p);
// 	    p = p->right;
// 	}
// }
// void postOrder (Node * root) {
// 	if ( root == NULL)	return;
// 	Node * p = root->left;
// 	while(p != NULL) {
// 	    postOrder(p);
// 	    p = p->right;
// 	}
// 	printf("%d ", root->id);
// }

void inorder (Node * root) {
	if (root == NULL ) return;
	inorder(root->left);
	printf("%d ", root->id );
	inorder(root->right);
}

void preorder (Node * root) {
	if (root == NULL) return;
	printf("%d ",root->id );
	preorder(root->left);
	preorder(root->right);
}

void postorder (Node * root) {
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ", root->id );
}

int count(Node * root){ // dem so nut tren con 
	if ( root == NULL) return 0;
	int s = 1;
	Node * p = root->left;
	while(p != NULL) {
	    s += count(p);
	    p = p->right;
	}
	return s;
}

int countLeaves ( Node * root) { // dem so nut chau co cha 
	if ( root == NULL) return 0;
	int s = 0;
	Node * p = root->left;
	if ( p != NULL)
		s = 1;
	while(p != NULL) {
	    s += countLeaves(p);
	    p = p->right;
	}
	return s;
}

int height(Node *p ){
	if (p == NULL) return -1;
	int maxH = 0;
	Node * q = p->left;
	while(q != NULL) {
	    int h = height(q);
	    maxH = maxH < h ? maxH : h;
	    q = q->right;
	}
	return maxH + 1 ;
}
int heightID ( Node * root, int id ){
	Node * p = find (root, id);
	return height(p);
}

int depth(Node * root, int id, int d){ // ham so nay chua dung
	if (root == NULL) return -1;
	if ( root->id == id ) return id;
	Node * q = root->left;
	while(q != NULL) {
	    // if (q->id == id ) return d+1;
	    depth(q, id, d+1);
	    q = q->right;
	}
	return -1;
}
int depthID ( Node * root, int id ){
	Node * p = find (root, id);
	return depth(root, id, 1 );
}

// Node * parent (Node *p, Node *root){
// 	if (root == NULL )	return NULL;
// 	Node *q = root->left;
// 	while( q != NULL) {
// 	    if (p == q ) return root;
// 	    Node * pp = parent(p,q);
// 	    if (pp != NULL) return pp;
// 	    q = q->right;
// 	}
// 	return NULL;
// }

Node * parent(Node * root, int id ){
	if (root == NULL ) return NULL;
	if (root->id == id ) return NULL;
	Node * q = root->left;
	while(q != NULL) {
	    if (q->id == id ) return root;
	    Node * p = parent(q, id);
	    if (p != NULL) return p;
	    q = q->right;
	}
	return NULL;
}

void freeTree(Node * root ) {
	if (root == NULL) return;
	if (root->left == NULL && root->right == NULL) free(root);
	freeTree(root->right);
	freeTree(root->left);
	free(root);
}

int main(int argc, char const *argv[])
{
	Node * root = createNode(1);
	insertLeft(root, 2);
	insertRight(root, 5);
	
	insertRight(root->right, 7);
	insertLeft(root->left, 6);
	insertLeft(root->right, 8);
	insertRight(root->left, 9);

	printf("\nInorder value  : ");
	inorder(root);

	printf("\nPreorder value : ");
	preorder(root);

	printf("\nPostOrder value: ");
	postorder(root);


	printf("\n\nCount element = %d " ,count(root));
	printf("\nCount leaves of tree = %d ", countLeaves(root) );
	printf("\nHeight of tree = %d ", heightID(root, 6));
	printf("\nDepth of tree = %d ", depthID(root, 7)); // this ham so chua xong

	Node * p = parent(root, 6);
	if (p == NULL) printf("\nNo parent\n");
	else printf("\nParent = %d ", p->id );

	freeTree(root);

	printf("\n\n\n");
	// Node * f = find(root , 7);
	// printf("Find the value = %d ? (co hay khong)", f->id );
	
	return 0;
}