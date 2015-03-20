//C01_g_Matrix_Multiplication
void matrix_Multiplication(float first[][],float second[][]){
	//if first matrix and second matrix can be multiplied by the spesification of their dimensions
	//create a matrix of total[][]
	int multiplied; 
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			for (int k = 0; k < count; k++)
			{
				multiplied+=first[i][k]*second[k][j];
			}
			total[i][j]=multiplied;
		}
	}
	return total[][];
}
