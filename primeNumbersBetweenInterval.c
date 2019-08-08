#include<stdio.h>
int main()
{
    int low,counter,high,i;
    scanf("%d %d",&low,&high);
    while(low<high)
    {
        counter=0;
        for(i=2;i<low/2;i++)
        {
            if(low%i==0)
            counter++;
        }
        if(counter==0)
        {
            printf("%d ",low);
        }
        low++;
    }
    return 0;
}
