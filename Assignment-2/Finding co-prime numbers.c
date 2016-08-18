//Finding co-prime numbers
#include<stdio.h>
int main()
{
	int n, mul, j, i;
	scanf("%d",&n);
	mul=n;
	for(j=2; j<=n ; j++)
	{
		for(i=2; i<=j; i++)
		{
			if(  j%i == 0)
			{
				break;
			}	
		}
		if(j==i)
		{
			if(n%i==0)
			{
			mul = mul * (i-1) / i;
			}
		}
	}
	printf("%d",mul);
	return 0;
} 