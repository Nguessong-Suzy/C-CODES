#include<stdio.h>
int main()
{
float fahr,cels;
printf("Fahrenheit\t Celsius\n");
for(fahr=0;fahr<=200;fahr+=20)
{
cels=(5*(fahr-32))/9;
printf("%10.2f%13.2f\n",fahr,cels);
}
return 0;
}
