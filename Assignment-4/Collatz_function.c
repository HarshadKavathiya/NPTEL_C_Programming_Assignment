//Collatz function
#include<stdio.h>

int cnt=0;
void f(int n)
{
	if(n%2==0)
		n=n/2;
	else 
		n=(3*n)+1;
	if(n!=1)
	{	cnt++;
		f(n);
		
	}
	if(n==1)
		printf("%d",cnt);
}
int main(int argc,char **argv)
{
	int n;
	scanf("%d",&n);
	if(n==1)
		printf("%d",cnt);
	else
	{	cnt++;
		f(n);
	}
	return 0;

}
