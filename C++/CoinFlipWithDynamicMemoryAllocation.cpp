#include <iostream.h>
#include <stdlib.h>
int heads()
{
	return rand() < RAND_MAX/2;
}
int main(int argc, char *argv[])
{
	int i,j,count;
	int N = atoi(argv[1]), M = atoi(argv[2]);
	int *f = new int[N+1];
	for( j = 0 ; j <=N ; j++)
		for( i = 0 ; i < M ; i++, f[count]++)
			if(heads())
				count++;
	for( j = 0 ; j <= N ; j++)
	{
		if( f[j] == 0 )
			cout << ".";
		for( i = 0 ; i < f[j]; i+=10)
			cout << "*";
		cout << endl;
	}
}