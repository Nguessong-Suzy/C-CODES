#include<iostream>
using namespace std;
int main()
{
	string mystring;
	cout<< "What is your name\n";
	cout<< "My name is ";
	getline(cin , mystring);
	cout<< "Hello "<< mystring;
	cout<< "\nWhat is your favorite meal\n";
	cout<< "My favorite meal is ";
	getline(cin , mystring);
	cout<< "I like "<< mystring << " too";
	return 0;
}
