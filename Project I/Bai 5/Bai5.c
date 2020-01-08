/*
  Professor : Pham Ngoc Hung
  Writher : YAN Samreach
  Subject : Project I (Bai 5).
  Title : Travelling Saleman
  Data : 20/11/2019
*/

#include<stdio.h>
#include<iostream>
using namespace std;

int cost = 999999;
int graph[4][4] = { {0, 3, 2, 1},
                    {3, 0, 1, 2},
                    {2, 1, 0, 4},
                    {1, 2, 4, 0}
                  };

// 4 6
// 1 2 3
// 1 3 2
// 1 4 1
// 2 3 1
// 2 4 2
// 3 4 4

// int m, line;
// int ** graph;

// void readFile(char * name){
//   FILE * f = fopen(name, "r");
//   fscanf(f,"%d %d", &m, &line); // read 4 6
//   graph = (int **)malloc(line * sizeof(int*));
//   for (int i = 0; i < line ; ++i)
//   {
//     graph[i] = (int *)malloc(m * sizeof(int));
//   }

//   for (int i = 0; i < line; ++i) {
//     int x, y, z;
//     fscanf(f,"%d %d %d",&x, &y, &z);
//     graph[x][y] = z;
//     graph[y][x] = z;
//     graph[i][i] = 0;
//     printf("%d %d %d \n",x, y,z );
//   }
//   fclose(f);
// }

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void copy_array(int *a, int n) {
    int  sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += graph[a[i % 4]][a[(i + 1) % 4]];
    }

    if (cost > sum) {
        cost = sum;
    }
}  
void permute(int *a, int i, int n){
   if (i == n) {
        copy_array(a, n);
   } else {
        for (int j = i; j <= n; j++) {
            swap((a + i), (a + j));
            permute(a, i + 1, n);
            swap((a + i), (a + j));
        }
    }
} 

int main(int argc, char *argv[]) {
  // int n = 1;
  // readFile(argv[n]);

  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 4; ++j)
    {
      printf("%d ", graph[i][j]);
    }
    printf("\n");
  }
  printf("\n\n");
  int a[] = {0, 1, 2, 3};
  permute(a, 0, 3);
  cout << "Minimum cost : " << cost << endl;
}