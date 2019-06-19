#include <stdio.h>
struct student
{
   char name[50];
   int height;
};
int main(){
    struct student stud1[5], stud2[5];   
    FILE *fptr;
    int i, n;

    printf("Enter n times : \n");
    scanf("%d",&n);

    fptr = fopen("file.txt","wb");
    for(i = 0; i < n; ++i)
    {
        printf("Enter name: ");
        //gets(stud1[i].name);
     	fflush(stdin);
        scanf("%s",stud1[i].name);

        printf("Enter height: "); 
        scanf("%d", &stud1[i].height); 
    }

    fwrite(stud1, sizeof(stud1), 1, fptr);
    fclose(fptr);

    fptr = fopen("file.txt", "rb");
    fread(stud2, sizeof(stud2), 1, fptr);
    printf("\n\n\n");
    for(i = 0; i < n; ++i)
    {
        printf("Name : %-15s , Height : %d\n", stud2[i].name, stud2[i].height);
    }
    fclose(fptr);
}