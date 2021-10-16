#include <stdio.h>
int find(int *a,int n)
{
    int s=*a;
    for(int i=0;i<n;i++)
    { if(s>*a)
         s=*a;
      a++;
    }     
    return(s);     
}
int main()
{
  int n;
  printf("Enter number of elements\n");
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
  printf("Smallest: %d\n",find(a,n));
}