//Choose k objects from n distinct objects
#include<stdio.h>
int main()
{
	int n, k, ans, fact1=1, fact2=1, fact3=1, c, d;
	do{
	scanf("%d",&n);
	}while(n>10 && n<0);
	
	do{
	scanf("%d",&k);
	}while(k<0);
	
	for (c = 1; c <= n; c++)
    	{
    		fact1 = fact1 * c;
	}
	for (c = 1; c <= k; c++)
    	{
    		fact2 = fact2 * c;
	}
	d = (n-k);
	for (c = 1; c <= d; c++)
    	{	
    		fact3 = fact3 * c;
	}
	
	ans = fact1/(fact2*fact3);
	printf("%d",ans);
	return 0;

}

