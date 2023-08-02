#include<stdio.h>
int main()
{

    int r,m=12,n=9;
    for(int i=n; i>=1; i--)
    {
        if(i%m==0 && i%n==0)
        {
            r=i;
            break;
        }
    }
    printf("The GCD of %d and %d is %d", m, n, r);
}
