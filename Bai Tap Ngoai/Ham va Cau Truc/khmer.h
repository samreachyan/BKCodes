#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void gotoxy(int x,int y) {
	printf("%c[%d;%df",0x1B,y,x);
}

void cls(){
	system("clear");
}

char *strrev(char *str) {
    if (!str || ! *str)
        return str;

    int i = strlen(str) - 1, j = 0;

    char ch;
    while (i > j)
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str;
}