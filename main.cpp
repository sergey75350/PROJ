#include "header.h"
#include "Mat/functions.h"
/*
#include <boost/program_options.hpp>
using namespace boost::program_options;

void on_vec_size(int number){
	std::cout << "On vec_size: " << number << '\n';
}
void on_matrix_size(int number){
	std::cout << "On matrix_size: " << number << '\n';

}
*/
int main(int argc, const char* argv[]){
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int default_size = 5;
	int vec_size = default_size;
	int matrix_size = 7;
	/*
	// boost
	try
	{
		options_description desc{ "Options" };
		desc.add_options()
			("help,h", "Help screen")
			("vec_size", value<int>()->notifier(on_vec_size), "vec_size")
			("matrix_size", value<int>()->notifier(on_matrix_size), "Matrix_size");

		variables_map vm;

		store(parse_command_line(argc, argv, desc), vm);
		notify(vm);
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("vec_size")) {
			std::cout << "vec_size: " << vm["vec_size"].as<int>() << '\n';
			vec_size = vm["vec_size"].as<int>();
		}
		if (vm.count("help"))
			std::cout << desc << '\n';
		else if (vm.count("matrix_size")) {
			std::cout << "Matrix_size: " << vm["matrix_size"].as<int>() << '\n';
			matrix_size = vm["matrix_size"].as<int>();
		}
	}
	catch (const error& ex)
	{
		std::cerr << ex.what() << '\n';
	}
	*/

	//init
	double *vec1 = new double[vec_size];
	double *vec2 = new double[vec_size];
	double *vecMult = new double[vec_size];
	double **matrix1 = new double*[matrix_size];
	double **matrix2 = new double*[matrix_size];
	double **matrixMult = new double* [matrix_size];
	double** matrixTransp1 = new double* [matrix_size];
	double** matrixTransp2 = new double* [matrix_size];
	for(int i = 0; i < matrix_size; i++) {
		matrix1[i]=new double[matrix_size]; 
		matrix2[i]=new double[matrix_size]; 
		matrixMult[i] = new double[matrix_size];
		matrixTransp1[i] = new double[matrix_size];
		matrixTransp2[i] = new double[matrix_size];
	}
	// vec
	initialization(vec1, vec2, vec_size,matrix1, matrix2, matrix_size);
	printf("\n vec1:\n");
	output_vec(vec1, vec_size);

	printf("\n vec2:\n");
	output_vec(vec2, vec_size);

	printf("\n vec1 + vec2:\n");
	mult_vec(vec1, vec2, vec_size, vecMult);
	output_vec(vecMult, vec_size);

	//matrix
	printf("\n matrix1:\n");
	output_matrix(matrix1, matrix_size);

	printf("\n matrix2: \n");
	output_matrix(matrix2, matrix_size);

	printf("\n matrix1 * matrix2: \n");
	mult_matrix(matrix1, matrix2, matrix_size, matrixMult);
	output_matrix(matrixMult, matrix_size);

	printf("\n matrix1_transp: \n");
	transp_matrix(matrix1,  matrix_size, matrixTransp1);
	output_matrix(matrixTransp1, matrix_size);
	
	printf("\n matrix1_transp: \n");
	transp_matrix(matrix2, matrix_size, matrixTransp2);
	output_matrix(matrixTransp2, matrix_size);

	system("pause");
	return 0;
}


