//C01_b_Interest Calculating basic interest
main(){
	int month;
	float money;
	float interest=0.05;

	for (month =1 ; month<=12; month++){
		money += money*interest;
		printf("In the %d. month , money will be %f",month,money);		 
	}
	printf("After %d months money will be %f",month,money");
}