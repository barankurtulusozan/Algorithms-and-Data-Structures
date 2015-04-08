//Basic Binary Search
//with Bad Programming
int search(int a[], int v,int l,int r)
{
	while(r>=l)
	{
		int m=(l+1)/2;
		if(v==a[m])
			return m;
		if(v<a[m])
			r=m-1;
		else
			l=m+1;
	}
	return -1;
}

//Variables have meaningless names
//Better use one return statement
//No explanation comments