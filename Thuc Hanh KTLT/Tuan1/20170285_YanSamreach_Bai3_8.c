#include <stdio.h>
#include <stdlib.h>

void allocate_mem(int **mt, int m, int n){
    //#Allocate memory for the matrix
    mt = (int **)malloc(m * sizeof(int *));
    for (int i=0; i<m; i< i++)
        mt[i] = (int *)malloc(n * sizeof(int));
}


void input(int **mt, int m, int n){
    //#Input elements of the matrix
    // int count = 0;
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) 
        //  mt[i][j] = ++count; 
            scanf("%d", *(*(mt+i)+j));
}

void output(int **mt, int m, int n){
    //# Print all elements of the matrix
    for (int i=0; i<m; ++i) {
        for (int j=0; j<n; ++j)
            printf("%d ", *(*(mt+i)+j));
        printf("\n");
    }
}

int process(int **mt, int m, int n){
    int tong = 0;
    //# Calculate the sum of all even elements in the matrix
    
    /*****************
    # YOUR CODE HERE #
    *****************/
    
    return tong;
}

void free_mem(int **mt, int m, int n){
    //# Free memory
    
    /*****************
    # YOUR CODE HERE #
    *****************/
}

int main(){
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    // printf("The sum of all even elements is %d", process(mt, m, n));
    // free_mem(mt, m, n);
    return 0;
}