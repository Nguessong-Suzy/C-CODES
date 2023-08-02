#include<stdio.h>
unsigned n=3;
int Arr[n];
int PositionOfElement()
{
   if(Arr[n]<Arr[n-1])
   {
   	return (Arr[n-1]>PositionOfElement(n-2));
	   }	
	   else if(Arr[n]>Arr[n-1])
	   {
	   	return (Arr[n]>PositionOfElement(n-2));
	   }
	   
}
int main()
{
	Arr[0]=1;
	Arr[1]=8;
	Arr[2]=2;
	PositionOfElement();
	return 0;
}
