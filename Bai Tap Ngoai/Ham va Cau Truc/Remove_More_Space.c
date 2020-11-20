#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SPACE ' '
 
char *process(char*);
 
int main()
{
   char text[1000], *r;
 
   printf("Enter a string\n");
   scanf("%s", text);
 
   r = process(text);
 
   printf("\"%s\"\n", r);
   
   free(r);    
 
   return 0;
}
 
char *process(char *text) {
   int length, c, d;
   char *start;
   
   c = d = 0;
   
   length = strlen(text);
 
   start = (char*)malloc(length+1);
   
   if (start == NULL)
      exit(EXIT_FAILURE);
   
   while (*(text+c) != '\0') {
      if (*(text+c) == ' ') {
         int temp = c + 1;
         if (*(text+temp) != '\0') {
            while (*(text+temp) == ' ' && *(text+temp) != '\0') {
               if (*(text+temp) == ' ') {
                  c++;
               }  
               temp++;
            }
         }
      }
      *(start+d) = *(text+c);
      c++;
      d++;
   }
   *(start+d)= '\0';
   
   return start;
}