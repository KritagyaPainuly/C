#include <stdio.h>
int main()
{
    int n,k;
    printf("How many numbers do you want in array\n");
    scanf("%d",&n);
    printf("From which number do you wanna campare\n");
    scanf("%d",&k);
    int a[n],g=0,l=0,e=0;
    printf("Enter:   \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>k)
        g++;
        else if(a[i]<k)
        l++;
        else
        e++;
    }
    printf("Greater: %d\nLesser: %d\nEqual %d",g,l,e);
}