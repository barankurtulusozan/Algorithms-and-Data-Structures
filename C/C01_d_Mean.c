//C01_d_Mean
main(){

	float arithmeticMean(int A[], int N){
		int num_of_elements;
		int total=0;
		float mean;
		for (num_of_elements = 0 ; num_of_elements < N ; num_of_elements++)
 		{
			total+=A[num_of_elements];
		}
		mean=(float) total/N;
		return mean;
	}

	float geometricMean(int A[],int N){
		int num_of_elements;
		unsigned long int multiply=1;
		float mean;
		for (num_of_elements= 0; num_of_elements < N; num_of_elements++)
		{
			multiply*=A[num_of_elements];
		}
		mean=(float) multiply/N;
		return mean;
	}

	

}