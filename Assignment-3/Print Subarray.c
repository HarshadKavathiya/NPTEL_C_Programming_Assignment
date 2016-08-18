//Print Subarray
void printSubarray(char *a,int start,int end)
{
	int i;
	for(i=start;i<=end;i++)
		printf("%c",*(a+i));
		
}