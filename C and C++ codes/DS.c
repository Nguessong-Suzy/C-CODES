#include<stdio.h>

int T[10]={5,2,1};
void selection_sort()
{
	int i,j,k,pos,tem,max;
	for(k=j; k>i; k--)
	{
		
		max=i;
		for(pos=i; pos<=k; pos++)
		{
			if(T[pos]>T[max])
			{
				max=pos;
			}
			tem=T[max];
			T[max]=T[k];
			T[k]=tem;
		}
	}
	
}


int main()
{
	selection_sort();
	return 0;
}
