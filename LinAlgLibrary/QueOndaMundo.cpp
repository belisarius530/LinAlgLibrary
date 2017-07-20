#include <iostream>
#include "Matrix.h"
int main()
{
	Matrix A = Matrix(2, 2);
	std::cout << "Que trazas, pinche maricon?!" << A.numCols<< std::endl;
	std::cin.ignore();
	return 0;
}