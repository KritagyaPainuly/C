#include<stdio.h>   
void cat(char p[], char q[])
{
   int c,d;
   c=0;
   while (p[c] != '\0')
      c++;      
    d = 0;
   while (q[d] != '\0') 
   {
      p[c] = q[d];
      d++;
      c++;    
   }
  p[c] = '\0';
}
int main()                                                                     
{                                                                               
    char a[1000],b[1000];
    gets(a);
    gets(b);
    cat(a,b);
    printf("%s\n",a);                      
}           

