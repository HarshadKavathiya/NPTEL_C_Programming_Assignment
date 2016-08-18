//Lexicographically preceding permutation
#include<stdio.h>

void swap(int *a,int *b)
{
    int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void lexicograph(int a[50],int t[50],int n)
{	int k=-1,l=0,j,i,b[50];
	for(i=0;i<n;i++)
	{
		if(i!=n-1&&a[i]<a[i+1] && i>k)
		{	k=i;
		}
	}
	if(k>=0)
	{
		for(i=k+1;i<n;i++)
		{
			if( a[k]<a[i] && i>l)
			{	l=i;
			}
		}
		swap(&a[k],&a[l]);
		j=0;
		for(i=0;i<=k;i++)
			b[j++]=a[i];
		for(i=n-1;i>=k+1;i--)
			b[j++]=a[i];
		for(i=0;i<n;i++)
		{		if(b[i]!=t[i])
				break;
		
		}
		if(i==n)
		{	swap(&a[k],&a[l]);
			for(i=0;i<n;i++)
				printf("%d ", a[i]);
		}
		else
			lexicograph(b,t,n);
	}	

}
int main()
{

	int i,n,a[50],t[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&t[i]);
	for(i=1;i<=n;i++)
		a[i-1]=i;
	for(i=0;i<n;i++)
		{		if(a[i]!=t[i])
				{
					break;
				}
		}
	if(i==n)
	{		for(i=0;i<n;i++)
				printf("%d ", a[i]);
	
	}
	else
		lexicograph(a,t,n);
	



	return 0;
}