#include<stdio.h>
int main()
{
	int sum=0,N,cnt;
	do{
	scanf("%d",&N);
	}while(N>40);
	for(cnt=1;cnt<=N;cnt++)
	{	
		sum=sum+(cnt*cnt*cnt*cnt);
	}
	printf("%d",sum);
	return 0;
}