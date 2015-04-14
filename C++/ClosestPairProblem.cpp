//Closest Pair Problem
#include <math.h>
#include <iostream.h>
#include <stdlib.h>
#include "Point.h"

float randFloat()
{
	return 1.0*rand()/RAND_MAX;
}

int main(int argc, char *argv[])
{
	float d=atof(argv[2]);
	int i,cnt =0, N= atoi(argv[1]);
	point *a = new point[N];
	
	for(i=0 ; i<N ; i++)
	{
		a[i].x = randFloat(); 
		a[i].y = randFloat();
	}

	for(i=0; i <N; i++)
	{
		for(int j=i+1; j<N;j++)
		{
			if(distance(a[i],a[j])<d) cnt++;
		}
	}

	cout << cnt << " pairs within " << d << endl;
}