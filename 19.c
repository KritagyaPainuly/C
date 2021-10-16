#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    FILE *fptr1, *fptr2;
    char para[1000],c;
    fptr1 = fopen("Originalfile.txt", "w+");
    printf("Enter The Content which you want to write in Original file=");
    gets(para);
    for(int i=0;i<strlen(para);i++)
    {
        fputc(para[i],fptr1);
    }
    rewind(fptr1);
    fptr2 = fopen("Copiedfile.txt","w+");
    while(!feof(fptr1))
    {
        c = fgetc(fptr1);
        if(c!=' ')
        	fputc(c, fptr2);
    }
	fclose(fptr1);
    rewind(fptr2);
	printf("Printing the content of the newly copied file ---> \n\n");
    while (!feof(fptr2))
    {
        c = fgetc(fptr2);
        printf("%c", c);
    }
    fclose(fptr2);
    return 0;
}