//C01_c_Roots of a Second Degree Equation
//include math.h for sqrt 
main(){
	int a,b,c,delta;
	float root1,root2;

	puts("Enter the values of a, b, c in the proper order for a second degree equation:");
	scanf("%d,%d,%d",a,b,c);
	delta=b*b-4*a*c;

	if(delta>0){
		root1 = (float) (-b-sqrt(delta))/(2*a);
		root2 = (float) (-b-sqrt(delta))/(2*a);
		printf("root1=%f,root2=%f\n",root1,root2);
	}
	else if(delta==0){
		root1= (float) -b/(2*a);
		printf("There is only one root and it is = %f \n",root1);
	}
	else
	{
		puts("Roots are Complex Numbers.");
	}
}