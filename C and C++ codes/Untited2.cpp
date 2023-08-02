#include<stdio.h>
int main()
{
 int c, nl, nw, nc, state;
       state = 0;     
       state = 1;
	     nl = nw = nc = 0;     
		   while ((c = getchar()) != EOF) {
           ++nc;     
		         if (c == '\n')           
				     ++nl;        
					    if (c == ' ' || c == '\n' || c == '\t')            
						  {
						   state = 1;
				          	}
						    else if (state == 0)
							 {            
							      ++nw;         
								    }     
									  }     
									    printf("%d %d %d\n", nl, nw, nc); 
										  } 
