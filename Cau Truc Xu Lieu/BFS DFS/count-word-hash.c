#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_L_WORD 100
#define MAX_SZ 10000

#define M 100

typedef struct Node{
    char* key;
    struct Node* left;
    struct Node* right;
    int count;
}Node;

Node* bst[M];// bst[i] la con tro tro den nut goc cua BST thu i

int h(char* s){
    int rs = 0;
    int sz = strlen(s);
    for(int i = 0; i < sz; i++){
        rs = (rs*256 + s[i])%M;
    }
    if(rs < 0) rs = -rs;
    return rs;
}

Node* find(Node* r, char* k){
    // tra ve con tro tro den phan tu co khoa k tren BST co goc r
    if(r == NULL) return NULL;
    int c = strcmp(r->key,k);
    if(c == 0) return r;
    if (c < 0) return find(r->right,k);
    return find(r->left,k);
}

Node* makeNode(char* k){
    Node* p = (Node*)malloc(sizeof(Node));
    p->key = (char*)malloc(MAX_L_WORD);
    sprintf(p->key,"%s",k);
    p->count = 1;
    p->left = NULL;
    p->right = NULL;
    return p;
}
Node* insert(Node* r, char* k){
    // chen nut moi co khoa k vao BST goc r
    if(r == NULL) return makeNode(k);
    int c = strcmp(r->key,k);
    if(c < 0) r->right = insert(r->right,k);
    else r->left = insert(r->left,k);

    return r;
}

Node* get(char* k){
    int idx = h(k);
    return find(bst[idx],k);
}

void normalize(char* s){
    if(s[strlen(s)-1] == 10) s[strlen(s)-1] = '\0';
}
int ignoreChar(char c){
    if(c == ' ' || c == '\t' || c == ',' || c == '.') return 1;
    return 0;
}
void solveFile(char* filename){
    FILE* f = fopen(filename,"r");
    char s[MAX_SZ];

    for(int i = 0; i < M; i++)
        bst[i] = NULL;

    while(!feof(f)){
        fgets(s,sizeof s,f);
        normalize(s);
        if(strcmp(s,"#")==0) break;

        int i = 0;
        char word[MAX_L_WORD];
        while(i < strlen(s)){
            while(i < strlen(s) && (ignoreChar(s[i])))
                i++;// IGNORE SPACE AND TAB CHARACTERS
            if(i >= strlen(s)) break;
            // new word start with s[i];
            int j = 0;
            while(i < strlen(s) && !ignoreChar(s[i])){
                word[j] = s[i];
                j++;
                i ++;
            }
            word[j] = '\0';
            printf("got a new word %s, length = %d\n",word,strlen(word));

            int idx = h(word);
            printf("GOT h[%s] = %d\n",word,idx);
            Node* p = find(bst[idx],word);
            if(p == NULL){
                printf("NOT FOUND %s\n",word);
                bst[idx] = insert(bst[idx],word);
            }else{
                printf("FOUND %s\n",word);
                p->count = p->count + 1;
            }
        }
    }

    fclose(f);
}
void printBST(Node* r){
    // in thong tin cho cac nut o BST co goc r
    if(r == NULL) return;
    printBST(r->left);
    printf("%s: %d\n",r->key,r->count);
    printBST(r->right);
}
void freeBST(Node* r){
    if(r == NULL) return;
    freeBST(r->left);
    freeBST(r->right);
    free(r->key);
    free(r);
    r = NULL;
}

void printAll(){
    for(int i = 0; i < M; i++)
        printBST(bst[i]);
}
void freeAll(){
    for(int i = 0; i < M; i++)
        freeBST(bst[i]);
}
int main(){
    //char* s = "def";
    //printf("h[%s] = %d\n",s,h(s));
    char * fi  = "wordcount.inp";
    solveFile(fi);
    printAll();

    char* s = "Messi";
    int idx = h(s);
    Node* p = find(bst[idx],s);
    printf("count[%s] = %d\n",s,p->count);
    //int a = -4;
    //int b = 10;
    //printf("a mod b = %d\n",a%b);

    freeAll();
}
