/// CodeSignal - Intro - Island of Knowledge
/// Box Blur
/// Author: Carlos L. Cuenca
/// Date: 10/20/2020

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

std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {

    std::vector<std::vector<int>> matrix;
    
    for(uint32_t row = 1; row < image.size() - 1; row++) {
        
        std::vector<int> newRow;
        
        for(uint32_t column = 1; column < image[row].size() - 1; column++) {
            
            int average = (image[row - 1][column - 1] + image[row - 1][column] + image[row - 1][column + 1] +
                           image[row][column - 1]     + image[row][column]     + image[row][column + 1]     +
                           image[row + 1][column - 1] + image[row + 1][column] + image[row + 1][column + 1]) / 9;
                           
            newRow.push_back(average);
            
        }
        
        matrix.push_back(newRow);
        
    }
    
    return matrix;

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

		std::vector<std::vector<int>> image(rows, std::vector<int>(columns, 0));

		for(uint32_t row = 0; row < image.size(); row++)
			for(uint32_t column = 0; column < image[row].size(); column++)
				std::cin >> image[row][column];

		image = boxBlur(image);

		for(uint32_t row = 0; row < image.size(); row++) {
			for(uint32_t column = 0; column < image[row].size(); column++) {
				std::cout << image[row][column] << " ";
			}

			std::cout << std::endl;

		}

		std::cout << std::endl;

	}

	return SUCCESS;

}


