#include "functions.h"
///Поэлементное умножение векторов
///
///Элементы первого вектора умножаются на элементы второго
void mult_vec(double* vec1, double* vec2, int vec_size, double* vecMult) {
	for (int i = 0; i < vec_size; i++)
		vecMult[i] = vec1[i] * vec2[i];
}

///Вывод вектора
void output_vec(double* vec, int vec_size) {
	for (int i = 0; i < vec_size; i++) {
		if (i % 10 == 0) printf("\n");
		printf("%g  ", vec[i]);
	}
	printf("\n");
}
