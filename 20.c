#include<stdio.h>
int main()
{
    int a;
    FILE *p;
    p=fopen("Num.txt","r");
    printf("Printing the context of file =");
    while((a=fgetc(p))!=-1)
    {
        fscanf(p,"%d",a);
    }

}