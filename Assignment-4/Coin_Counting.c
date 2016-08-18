//Coin Counting
#include <stdio.h>

int main(int argc,char argv[])
{
	int N,T,tmp=0,cnt=0,i,j,k;
//	printf("Enter number of trials");
	scanf("%d",&T);
	while(T>0)
	{		cnt=0;
			//printf("Enter N");
			scanf("%d",&N);
		//	if(N<101)
			{
				if(N==1)
					cnt++;
				else
				{
					
				for(i=0;i<=N/5;i++)
					for(j=0;j<=N/3;j++)
						for(k=0;k<=N;k++)
						{
							tmp=(i*5)+(j*3)+(k*1);
							if(tmp==N)
							{
								cnt++;
								//printf("%d %d %d\n",i,j,k);
							}	
						}
				}
			}
			printf("%d\n",cnt);
			T--;
	}

	return 0;
} 