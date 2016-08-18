//Missing Integer Problem
#include<stdio.h>
int main()
{
	int n, sum=0, temp=0, i, b, c;
	
	do
	{
	scanf("%d",&n);
	}while(n<2 || n>10000);
	
	
	sum = n * (n+1) /2;
	
	for(i=0 ; i<=(n-2) ; i++)
	{
		scanf("%d",&b);
		temp = temp + b;
	}
	
	
	
	c = sum - temp;
	
	printf("%d",c);
	return 0;
}