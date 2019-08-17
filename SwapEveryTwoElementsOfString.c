#include <stdio.h>

int main()
{
    char str[30],temp;
    int i;
    scanf("%s",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(i%2==0)
        {
           temp = str[i];
           str[i]=str[i+1];
           str[i+1]=temp;
        }
    }
    for(i=0;i<=strlen(str);i++)
    {
        printf("%c",str[i]);
    }

    return 0;
}
