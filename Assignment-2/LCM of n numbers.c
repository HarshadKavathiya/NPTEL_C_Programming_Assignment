//LCM of n numbers
#include<stdio.h>
int lcm(int num1,int num2)
{
	int i,temp1,temp2,rem,gcd,lcm;
	temp1=num1,temp2=num2;
    	while(num2!=0)
    	{
    		rem=num1%num2;
       		num1=num2;
       		num2=rem;
    	}
    	gcd=num1;
    	lcm=(temp1*temp2)/gcd;
	return lcm;
}
int main()
{
    	int i,n,num[50],lcm_=1;
    	scanf("%d",&n);
	for(i=0;i<n;i++)
	    	scanf("%d",&num[i]);
	{for(i=0;i<n;i++)
		lcm_=lcm(num[i],lcm_);
	}

    	printf("%d",lcm_);
    	return 0;
}