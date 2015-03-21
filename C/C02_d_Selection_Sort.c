//C02_d_Selection_Sort
void selection_Sort(int D[], int N){
	int index,min;
	for (int i = 0; i < N; ++i)
	{
		min=D[N-1];
		index=N-1;
		for (int j = 0; j < (N-1)); j++)
		{
			if(D[j]<min){
				min=D[j];
				index=j;
			}
			D[index]=D[i];
			D[i]=min;
		}
	}
}