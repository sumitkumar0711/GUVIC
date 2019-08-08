#include<stdio.h>
#include<math.h>
int Palindrome(int n)
{
    int sum = 0,di,i,nn1,nn2,counter=0;
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
    printf("%d ",n);
}

int main()
{
    int low,high;
    scanf("%d %d",&low,&high);
    while(low<high)
    {
        Palindrome(low);
        low+=1;
    }
    return 0;
}
