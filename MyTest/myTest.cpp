#include "pch.h"
#include "../Mat/functions.h"

// vec1 + vec2
TEST(TestArray, Test_mult_vec_1) {		
	double* vec1 = new double[3]{ 1, 1, -4 };
	double* vec2 = new double[3]{ 2, 5, 17};
	double* result = new double[3]{ 3, 6, 13 };
	double* func_res = new double[3];
	mult_vec(vec1, vec2, 3, func_res);

	for(int i=0;i< 3;i++)
		EXPECT_EQ(result[i], func_res[i]);

	delete[] vec1;
	delete[] vec2;
	delete[] result;
}
TEST(TestArray, Test_mult_vec_2) {
	double* vec1 = new double[3]{ -1, -1, -1 };
	double* vec2 = new double[3]{ 2, 5, 14 };
	double* result = new double[3]{ 1, 4, 13 };
	double* func_res = new double[3];
	mult_vec(vec1, vec2, 3, func_res);

	for (int i = 0; i < 3; i++)
		EXPECT_EQ(result[i], func_res[i]);

	delete[] vec1;
	delete[] vec2;
	delete[] result;
}

// matrix1 * matrix2
TEST(TestMatrix, Test_sum_matrix) {
	double** matrix1 = new double* [2];
	double** matrix2 = new double* [2];
	double** result = new double* [2];
	double** func_res = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix1[i] = new double[2];
		matrix2[i] = new double[2];
		result[i] = new double[2];
		func_res[i] = new double[2];
	}
	matrix1[0][0] = 1;
	matrix1[0][1] = 1;
	matrix1[1][0] = 1;
	matrix1[1][1] = 1;

	matrix2[0][0] = 1;
	matrix2[0][1] = 1;
	matrix2[1][0] = 1;
	matrix2[1][1] = 1;

	result[0][0] = 2;
	result[0][1] = 2;
	result[1][0] = 2;
	result[1][1] = 2;

	mult_matrix(matrix1, matrix2, 2, func_res);

	EXPECT_EQ(**result, **func_res);

	for (int i = 0; i < 2; ++i){
		delete[] matrix1[i];
		delete[] matrix2[i];
		delete[] result[i];
		delete[] func_res[i];
	}
	delete[] matrix1;
	delete[] matrix2;
	delete[] result;
	delete[] func_res;
}

// matrix_transp
TEST(TestMatrix, Test_transp_matrix) {
	double** matrix = new double* [2];
	double** result = new double* [2];
	double** func_res = new double* [2];
	for (int i = 0; i < 2; i++) {
		matrix[i] = new double[2];
		result[i] = new double[2];
		func_res[i] = new double[2];
	}
	matrix[0][0] = 1;
	matrix[0][1] = 1;
	matrix[1][0] = 2;
	matrix[1][1] = 2;


	result[0][0] = 1;
	result[0][1] = 2;
	result[1][0] = 1;
	result[1][1] = 2;

	transp_matrix(matrix, 2, func_res);

	EXPECT_EQ(**result, **func_res);

	for (int i = 0; i < 2; ++i) {
		delete[] matrix[i];
		delete[] result[i];
		delete[] func_res[i];
	}
	delete[] matrix;
	delete[] result;
	delete[] func_res;
}
