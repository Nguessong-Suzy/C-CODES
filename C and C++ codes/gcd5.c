#include<stdio.h>

int gcd(int x, int y){
	while(x!=y){
		if(x>y){
			x=x-y;
		}else{
			y=y-x;
		}
	}
	return x;
}

int main(){
	printf("answer: %d", gcd(7,5));
}
