#include<stdio.h>
int arr[5]={1,5,8,7,6};
int n=10;
void selection()
{
	int i,j,pos,swap;
	for(i=0; i<(n-1); i++)
	{
		pos=i;
		for(j=i+1; j<n; j++)
		{
			if(arr[pos]>arr[j])
			pos =j;
		}
		if(pos != 1)
		{
			swap= arr[i];
			arr[i] = arr[pos];
			arr[pos]= swap;		}
	}
}
int main()
{
	
	selection();
}
