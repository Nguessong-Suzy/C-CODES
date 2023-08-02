#include<iostream>
using namespace std;
int factorial(int a)
{
	if(a>1)
	return(a*factorial(a-1));
	else
	return 1;
}
int main()
{
	int number;
	cout<< "enter a number\n";
	cin>> number ;
	cout<< number << "! = " << factorial(number);
	return 0;
}
