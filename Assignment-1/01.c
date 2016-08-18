#include<stdio.h>
int main()
{
	int a , b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if((((a*a)+(b*b))==(c*c))||(((a*a)+(c*c))==(b*b))||(((c*c)+(b*b))==(a*a)))
		printf("yes");
	else
		printf("no");
		
	return 0;
}