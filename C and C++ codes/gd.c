#include<stdio.h>

int gcd(int m, int n)
{
    int i,j;
    if(m>n){
        for(i=n; i>0 ; i--){
            if(m%i==0 && n%i==0){
                j=i;
                 break;
        }
            }

    }
    else if(n>m){
         for(i=m; i>0 ; i--){
            if(m%i==0 && n%i==0){
                j=i;
                 break;
        }
            }
    }
    else{
        j=m;
    }
    return j;
}

int main(){
    printf("%d",gcd(31415,14142));
    return 0;
}
