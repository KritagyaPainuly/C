#include<stdio.h>   
#include<string.h>
int main()                                                                     
{                                                                               
    char a[1000],b[1000];
    gets(a);
    int l=strlen(a);
    for(int i=0;i<=l;i++)
     printf("%c",a[l-i]);                      
}           

