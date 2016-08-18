//Count occurences of pattern string
#include<stdio.h>
#include<string.h>
int main()
{	int i,j,cnt=0;
	char str[8192],pattern[8192];
	gets(str);
	gets(pattern);
	for(i=0;i<strlen(str);i++)
	{	for(j=0;j<strlen(pattern);j++)
		{	if(str[i+j]!=pattern[j])
				break;
		}
		if(j==strlen(pattern))
			cnt++;
	}
	printf("%d",cnt);
	return 0;
	
}