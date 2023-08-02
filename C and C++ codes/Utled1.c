#include<stdio.h>
int main()
{
    float fahr,cels;
    
    fahr = 0;
    while(fahr<=300)
	{
		cels = (5.0*(fahr-32.0))/9.0;
		printf("%3.0f\t %6.2f\n" , fahr,cels);
		fahr = fahr + 20;
	}
	return 0;
}

