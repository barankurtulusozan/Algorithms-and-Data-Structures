//C02_a_Array_Linear_Search
int linear_Search(int A[], int N, int searched_item){
	for (int i = 0; i < count; ++i)
	{
		if(A[i]==searched_item)
			return i;
	}
	return -1;
}
main(){
	int B[]={1,7,2,5,3,13,17,19,24,15,22,58};
	int indice;

	puts("Please enter the searched number");
	scanf("%d",&search);
	indice=linear_Search(B,12,search);

	if(indice==-1)
		puts("No result");
	else
		printf("Indice of the result is %d\n",indice);
}