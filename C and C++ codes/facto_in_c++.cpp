#include<iostream>
using namespace std;

int factorial(int n){
	if(n==0 || n==1){
		return 1;
	}else if(n<0){
		cout<< "Invalid input";
	}else{
		return n*factorial(n-1);
	}
}

int main(){
	int a;
	cout<< "Enter a number \n";
	cin>> a;
	cout<< "The factorial of your number is  ";
	cout<< factorial(a);
}
