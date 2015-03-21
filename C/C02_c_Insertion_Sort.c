//C02_c_Insertion_Sort
insertion_Sort(int D[],int N){
	int add;
	for (int i = 1; i < N; i++)
	{
		add=D[i];
		for (int j=i-1; j>=0 && add<=D[j]; j--)
		{
			D[j+1]=D[j];
		}
		D[j+1]=add;
	}
}