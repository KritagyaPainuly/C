#include<stdio.h>   
#include<string.h>
int compare(char a[],char b[])
{ 
    int i=0;
    if(strlen(a)!=strlen(b))
    {
     printf("Strings are not equal\n");
     return 0;
    }
    while(a[i]!='\0'){
     if(a[i]!=b[i])
     {
     printf("Strings are not equal\n");
     return 0;
     }
     i++;
    } 
    printf("Strings are equal\n");
    return 1;
}
int main()                                                                     
{                                                                               
    char a[1000],b[1000];
    gets(a);
    gets(b);
    compare(a,b);                      
}           

