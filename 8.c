#include <stdio.h>
void SWAP(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
  int a,b;
  printf("Enter number to be swap\n");
  scanf("%d%d",&a,&b);
  SWAP(&a,&b);
  printf("a:%d b:%d",a,b);
}