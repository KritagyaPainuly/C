#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number in which order you want matrix\n");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter: \n");
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
          scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++)
      if(j<i)
       if(a[i][j]!=0){
        printf("Matrix Q is not upper triangular matrix\n");
        return 1;}
    printf("Matrix Q is a upper triangular matrix\n");
    
}
