#include<stdio.h>
int main (void){
int n=10;
int array[n];
int i, max;
for (i=0;i<n;i++){
	printf("enter value[%d]: ",i);
	scanf("%d",&array[i]);
}
	max=array[i];
	if(array[i+1]>array[i])
	i++;
	max=array[i+1];
	printf("\max num is %d ",max);
}
