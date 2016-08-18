//Last ant on rod
#include<stdio.h>
void swap(int *a,int *b)
{
    int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void fall(int ant[1002],int dir[50],int n)
{		int i,j=0;
		for(i=1;i<=n;i++)
		{
			if(dir[i]==1)
			{	break;				
			}	
		}
		j=n-(i-1);
		if(i>j)
			printf("%d",ant[i-1]);
		else if(i<j)
			printf("%d",ant[j-1]);
		else
			printf("%d",ant[i]);
			
}
void check_cross(int ant[1002],int dir[50],int n)
{	int f=0,i;
	for(i=1;i<=n;i++)	
		{
			if((dir[i]==1 && dir[i+1]==-1))
			{	swap(&dir[i],&dir[i+1]);
					f=1;
			}
			
		}	
		if(f==1)
				check_cross(ant,dir,n);
		else
				fall(ant,dir,n);
}
int main()
{
	int i,n,ant[1002],dir[50];
	scanf("%d",&n);
	ant[0]=0;
	dir[0]=0;
	dir[n+1]=0;
	ant[n+1]=0;
	if(n>=1&&n<=1000)
	{
		for(i=1;i<=n;i++)	
		{	scanf("%d",&dir[i]);
			ant[i]=i;	
		}
		check_cross(ant,dir,n);
	
	}
	return 0;
}
