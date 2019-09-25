#include <stdio.h>
int main(void) {
  int i,j,a[100][100],n,sum1=0,sum2=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
      {
        sum1 = sum1 + a[i][j];
      }
      if((i+j)==n)
      {
        sum2 = sum2 + a[i][j];
      }
    }
    
  }
  printf("%d",sum1*sum2);
    return 0;
}
