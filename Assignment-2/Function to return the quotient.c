//Function to return the quotient
int divide(int x, int y)
{
	int p,q,r;
	p=x;
	q=y;
	if(p%q==0)
	{
	r=p/q;
	return r;
	}
	else
	{
	r=-1;
	return r;
	}
}