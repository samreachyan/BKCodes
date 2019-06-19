/* 
	writer : YAN Samreach
	Lecture : web programmiz
	Subject : Cau Truc Du Lieu
	Year :: 07-05-2019

	Describe : Basic tree, add value into tree and learn about Inorder, Preorder, Postorder.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node * left;
	struct Node * right;
} Node ;

Node * createNode (int value) {
	Node * newNode = (Node*)malloc(sizeof(Node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

void preorder (Node * root) {
	if (root == NULL) return;
	printf("%d ->",root->data );
	preorder(root->left);
	preorder(root->right);
}

void inorder (Node * root) {
	if (root == NULL ) return;
	inorder(root->left);
	printf("%d ->", root->data );
	inorder(root->right);
}

void postorder (Node * root) {
	if (root == NULL) return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ->", root->data );
}

Node * insertLeft (Node * root , int value){
	root->left = createNode(value);
	return root->left;
}

Node * insertRight (Node * root, int value ) {
	root->right = createNode(value);
	return root->right;
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
	Node * tree = createNode(1);
	insertLeft(tree, 12);
	insertRight(tree, 9);

	insertLeft(tree->left, 5);
	insertLeft(tree->right, 8);
	insertRight(tree->right, 6);


	printf("\nPreorder traversal \n");
	preorder(tree);

	printf("\nInorder traversal \n");
	inorder(tree);


	printf("\nPostorder traversal \n");
	postorder(tree);

	printf("\n\n");
	
	free(tree);
	return 0;
}