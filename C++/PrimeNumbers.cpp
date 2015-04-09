#include <iostream.h>
static const int N=10000;
int main()
{
	int i, a[n];
	for ( i = 2 ; i < N ; i++)
	{
		a[i] = 1 ;
	}
	for( i = 2 ; i < N; i++ )
		if( a[i] )
			for(int j = i ; j * i < N ; j++)
			{
				a[ i * j ] = 0;
			}
	for( i = 2 ; i < N ; i++ )
	{
		if( a[i] )
			cout << " " << i ;
		cout << endl;
	}	
}