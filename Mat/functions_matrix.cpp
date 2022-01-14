#include "functions.h"
///Произведение матриц
void mult_matrix(double** matrix1, double** matrix2, int matrix_size, double** matrixMult){
	
	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
		{
			matrixMult[i][j] = 0;
			for (int k = 0; k < matrix_size; k++)
			{
				matrixMult[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
}
void transp_matrix(double** matrix, int matrix_size, double** matrixTransp)
{
	for (int i = 0; i < matrix_size; i++)
		for (int j = 0; j < matrix_size; j++)
			matrixTransp[i][j] = matrix[j][i];
}

///Вывод матрицы
void output_matrix(double** matrix, int matrix_size){
	for(int i = 0; i < matrix_size; i++) {
		for(int j = 0; j < matrix_size; j++) {
			printf(" %g ", matrix[i][j]);
		}
		printf("\n");
	}
}
