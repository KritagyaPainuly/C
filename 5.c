#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number in which order you want matrix\n");
    scanf("%d",&n);
    int a[n][n],s1=0,s2=0;
    printf("Enter: \n");
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
          scanf("%d",&a[i][j]);
          if(j==i)
           s1=s1+a[i][j];
      } 
     s2=s2+a[i][n-i-1];
    }
    printf("Sum of Principal Diagonal:%d\nSum of Secondary Diagonal:%d\n",s1,s2);
}
