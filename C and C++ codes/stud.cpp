 #include <stdio.h>
 #define in 1
 #define out 0
 int main()
 {
 	int nc,nl,nw,c,state;
 	state = 0;
 	nl = nc = nw = 0;
 	while((c=getchar()) != EOF)
 	{
 		++nc;
 		if(c = '\n')
 		++nl;
 		if(c == ' ' || c == '\n' || c == '\t')
 		state = in;
 		else if(state = out)
 	    {
 		    ++nw;
 		}
	 }
 	printf("nc = %d \n nl = %d \n nw = %d", nc,nl,nw);
 	return 0;
 }
