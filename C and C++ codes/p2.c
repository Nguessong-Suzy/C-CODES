#include<stdio.h>
int main()
{
    int n, pos=0, neg=0, zer=0, total=0;
    float avg=0;
    int ar[1000];
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ar[i]);
        if(ar[i]<0)
        {
            neg++;
        }
        else if(ar[i]>0)
        {
            pos++;
        }
        else
        {
             zer++;
        }
        total += ar[i];
    }
    avg = total / n;

    printf("There are %d negative numbers, %d positive numbers, %d zero numbers\n", neg, pos, zer);
    printf("The total is %d and the average %.2f", total, avg);
}
