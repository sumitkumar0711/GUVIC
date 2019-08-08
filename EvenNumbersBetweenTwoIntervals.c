#include<stdio.h>
void main()
{
    int i,l,h;
    scanf("%d %d",&l,&h);
    for(i=l+1;i<h;i++)
    {
        if(i%2==0)
        printf("%d ",i);
        else
        continue;
    }
}
