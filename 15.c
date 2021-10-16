#include<stdio.h>   
int main()                                                                     
{                                                                               
    char b[1000];
    char *a=b;
    gets(b);
    int i,f[26]={0};
    while(*a!='\0')
     {
        if(*a>='A' && *a<='Z')
        {
        i=*a-'A';
        f[i]=f[i]+1;
        }
        if(*a>='a' && *a<='z')
        {
        i=*a-'a';
        f[i]=f[i]+1;
        }
        *a++;
     }
    for ( int i = 0; i < 26 ; i++)
        if(f[i]>0)
		printf("%c Freq = %d\n", i+65, f[i]);
}           

