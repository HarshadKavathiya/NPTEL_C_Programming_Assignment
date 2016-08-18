#include<stdio.h>

int main()
{
	int i,j,N,a[5][5],flag=1,flag1=1;

	scanf("%d",&N);
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d",&a[i][j]);

	for(i=0;i<N;i++)
		for(j=N-1;j>i;j--)
		{      // printf("%d %d %d \n",a[i][j],i ,j);
			if(a[i][j]!=0 && flag==1)
			{
				flag=0;
				break;
			}
		}
	for(i=0;i<N;i++)
		for(j=0;j<i;j++)
		{
			if(a[i][j]!=0 && flag1==1)
			{	flag1=0;
				break;
			}
		}
	if(flag==1||flag1==1 )
		printf("yes\n");
	else
		printf("no\n");
		
	return 0;
}