#include<stdio.h>
int main()
{
    int d=0, i;
    for(i=100; i<=1000; i++)
    {
        if(i%5==0 && i%6==0)
        {
            printf("%d ",i);
            d++;
            if(d==10)
            {
                printf("\n");
                d=0;
            }
        }
    }
}
