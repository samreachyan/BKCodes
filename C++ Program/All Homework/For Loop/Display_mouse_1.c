#include <stdio.h>
 
void print(int);
 
int main()
{
  int n;
  scanf("%d", &n);
  print(n);
  return 0;
}
 
void print(int n)
{
  static int c = 1;
  if (c == n+1)
    return;
  printf("%d\n", c);
  c++;
  print(n);
}
