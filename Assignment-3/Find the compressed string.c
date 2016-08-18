//Find the compressed string
#include<stdio.h>
#include<string.h>
int main()
{	int n,i;
	char str[50][50],output[50][50];
	int c[50];
	scanf("%d",&n);
	scanf("%s",str[0]);
	if(n>=1&&n<=1000){
		for(i=1;i<n;i++)
		{	scanf("%d",&c[i]);
			scanf("%s",str[i]);
		}
	}
//	memcpy(output,"\0",sizeof(output));
	strcpy(output[0],str[0]);
	for(i=1;i<n;i++)
	{	
		strxfrm(output[i],output[i-1],c[i]);
		strcat(output[i],str[i]);
		
	}
	printf("%s",output[n-1]);
	return 0;
}