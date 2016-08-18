#include<stdio.h>
int main()
{
	int a[100],i=0,size,j,b;
	do
	{	//i++;
		scanf("%d", &a[i]);
	}while(a[i++]!=-1);
	size=i-1;
	for(i=0 ; i<size ; i++)
	{
		for(j=i ; j<size ; j++)
		{
			if(a[i] < a[j])
			{
				b = a[j] ;
				a[j] = a[i] ;
				a[i] = b ;
			}
		}
	}
	printf("%d",a[1]);
	return 0;
}