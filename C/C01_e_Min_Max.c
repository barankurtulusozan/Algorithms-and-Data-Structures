//C01_d_Min_Max
main(){
	
	float min(float A[], int N){
		float min;
		min=A[0];

		for (int i = 0; i < N; ++i)
		{
			if(A[i]<min)
				min=A[i];
		}
		return min;
	}

	float max(float A[], int N){
		float max;
		max=A[0];

		for (int i = 0; i < N; ++i)
		{
			if(A[i]>max)
				max=A[i];
		}
		return max;
	}

}