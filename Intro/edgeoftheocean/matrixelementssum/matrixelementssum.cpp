/// CodeSignal - Intro - Edge of the Ocean
/// Matrix Elements Sum
/// Author: Carlos L. Cuenca
/// Date: 10/29/2020

#include<iostream>
#include<vector>
#include<cinttypes>
#include<algorithm>
#include<climits>
#include<string>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// ------------------------
/// Function Implementations

int matrixElementsSum(std::vector<std::vector<int>> matrix) {
	
	uint32_t sum = 0;
    
    std::vector<bool> notHaunted(matrix[0].size(), true);

	for(int row = 0; row < matrix.size(); row++)
		for(int column = 0; column < matrix[row].size(); column++) {
            
            notHaunted[column] = notHaunted[column] && matrix[row][column];
            
			if(row - 1 >= 0) {
                
                if(notHaunted[column]) sum += matrix[row][column];

			} else {

				if(notHaunted[column]) sum += matrix[row][column];
                
			}

		}

	return sum;
       
}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	uint32_t rows       ;
	uint32_t columns    ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> rows >> columns;

		std::vector<std::vector<int>> matrix(rows, std::vector<int>(columns, 0));

		for(uint32_t row = 0; row < rows; row++)
			for(uint32_t column = 0; column < columns; column++)
				std::cin >> matrix[row][column];

		std::cout << matrixElementsSum(matrix) << std::endl;

	}

	return SUCCESS;

}


