#include<stdio.h>
#include<math.h>
int main()
{
    int sum = 0,di,i,n,nn1,nn2,counter=0;
    scanf("%d",&n);
    nn1=n;
    for(i=0;i<=(nn1+1);i++)
    {
        counter++;
        nn1=nn1/10;
    }
    nn2 = n;
    for(i=0;(i<=nn2+1);i++)
    {
        di = nn2%10;
        sum = sum + (pow(di,counter));
        nn2 = nn2/10;
    }
    if(sum==n)
    printf("yes");
    else
    printf("no");
    return 0;
}
