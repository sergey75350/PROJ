#include "header.h"
using namespace std;

void initialization(double vec1[], double vec2[], int vec_size,double** matrix1, double** matrix2, int matrix_size){
	for(int i = 0; i < matrix_size; i++)
		for(int j = 0; j < matrix_size; j++){
			matrix1[i][j] = rand() % 255;
			matrix2[i][j] = rand() % 255; 
		}
	for(int i = 0; i < vec_size; i++) 
		vec1[i] = i + i*rand() % 255;
	for(int i = 0; i < vec_size; i++) 
		vec2[i] = i-i^2*rand() % 255;
}
