#include <stdio.h>
int main()
{
    int n,k;
    printf("How many numbers do you want in 1 array and 2 array\n");
    scanf("%d%d",&n,&k);
    int a[n],b[k],s[100],g=k,l=n;
    printf("Enter 1 array:   \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s[i]=a[i];
    }
    printf("Enter 2 array:   \n");
    for(int i=0;i<k;i++)
    {
        scanf("%d",&b[i]);
        s[i]=b[i];
    }
    if(k<n)
    {
     g=n; l=k;
    }
     for(int i=0;i<l;i++)
        s[i]=a[i]+b[i];   
    for(int i=0;i<g;i++)
        printf("%d ",s[i]);
}