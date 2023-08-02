#include<stdio.h>
int main()
{
	float R1, R2, R3, R;
	printf("Enter the first resistance R1\n");
	scanf("%f", &R1);
	printf("\nEnter the second resistance R2\n");
	scanf("%f", &R2);
	printf("\nEnter the third resistance R3\n");
	scanf("%f", &R3);
	R = ((R1*R2*R3)/(R1*R2 + R1*R3 + R2*R3));
	printf("\nThe total resistance, R = %f", R);
	return 0;
}
