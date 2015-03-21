//C02_e_Bubble_Sort
void bubble_Sort(int D[], int N){
	int temp;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N-1-i; j++)
		{
			if(D[j]>D[k+1]){
				temp=D[j];
				D[j]=D[j+1];
				D[j+1]=temp;
			}
		}
	}
}
main(){
	//Define an int array
	//send array to bubble_Sort Func.
	//Print Array with for
}