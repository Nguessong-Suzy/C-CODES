#include<stdio.h>
int main()
{
float Fahrenheit,Celsius;
printf("Fahrenheit\t Celsius\n");
for(Fahrenheit=0;Fahrenheit<=200;Fahrenheit+=20)
{
    Celsius = (5*(Fahrenheit-32))/9;
printf("%10.2f%13.2f\n",Fahrenheit,Celsius);
}
return 0;
}
