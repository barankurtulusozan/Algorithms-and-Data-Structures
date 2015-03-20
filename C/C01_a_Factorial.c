 //C01_a_Factorial
main(){
	int N,counter,factorial=1;
	puts("Enter a number");
	scanf("%d",&N);
	for(counter=2; counter<=N;counter++)
		factorial=factorial*counter;
	printf("%d Factorial N = %d",N,factorial)
}