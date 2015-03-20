//C01_f_Matrix_Addition
//take input num of column and rows from user
void matrix_Addition(float first[][],float second[][]){
	//if first matrix and second matrix have the same dimensions
	//create a matrix of total[][] which has same dimensions as first and second
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			total[i][j]+=first[i][j]+second[i][j];
		}
	}
	return total[][];
}
