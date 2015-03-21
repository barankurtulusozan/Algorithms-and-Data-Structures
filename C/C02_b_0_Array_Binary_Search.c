//C02_b_Array_Binary_Search
int binary_Search(int D[], int N, int searched_item){
	int middle,left=0,right=N-1;

	while(left<=right){
		middle=(left+right)/2;
		if(searched_item==D[middle])
			return middle;
		else if(searched_item>D[middle])
			left=middle+1;
		else
			right=middle-1;
	}
	return -1;
}
main(){
	int B[]={1,7,2,5,3,13,17,19,24,15,22,58};
	int indice;

	puts("Please enter the searched number");
	scanf("%d",&search);
	indice=binary_Search(B,12,search);

	if(indice==-1)
		puts("No result");
	else
		printf("Indice of the result is %d\n",indice);
}