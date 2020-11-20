/* 
	writer : YAN Samreach
	Lecture : web programmiz
	Subject : Cau Truc Du Lieu
	Year :: 07-05-2019

	Describe : Tree basic add value and print the value
*/


#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * left;
	struct node * right;
} node;

node * createNode (int value){
	node * newNode = (node*)malloc(sizeof(node));
	newNode->data = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

node * insertLeft(node * root , int value) {
	root->left = createNode(value);
	return root->left;
}

node * insertRight(node * root , int value) {
	root->right = createNode(value);
	return root->right;
}

int main(int argc, char const *argv[])
{
	printf("Hello world\n");

	node * root_tree = createNode(1);
	insertLeft(root_tree, 2);
	insertRight(root_tree, 3);

	printf("The element of tree are : ");
	printf("%d %d %d\n", root_tree->data, root_tree->left->data , root_tree->right->data);
	return 0;
}