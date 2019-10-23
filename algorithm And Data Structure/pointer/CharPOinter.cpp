#include<stdio.h>
#include<string.h>
void print(char *c)
{
    printf("Print inside function\n");
    int i=0;
    while(*(c+i)!='\0'){
        printf("%c",c[i]);
        c++;
    }
}
int main()
{
    char C[]="Nice";
    char *c2;
    c2=C;
    for(int i=0;i<strlen(C);i++)
    printf("%c\n",*(c2+i));

    print(C);
}
