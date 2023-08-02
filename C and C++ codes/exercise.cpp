#include<stdio.h>
#define IN 1
#define OUT 0
main()
{
	int c,state;
	state=OUT;
	while((c=getchar())!= EOF)
	{
	if(c==' '|| c=='\t'){
	
	state=IN;}
	else if(state==OUT)
	{
		putchar('\n');
		putchar(c);
	}
	else{
	
	putchar(c);}
	}
}
