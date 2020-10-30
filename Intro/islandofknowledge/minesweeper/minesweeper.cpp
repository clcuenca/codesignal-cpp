/// CodeSignal - Intro - Island of Knowledge
/// Minesweeper
/// Author: Carlos L. Cuenca
/// Date: 10/30/2020

#include<iostream>
#include<vector>
#include<cinttypes>
#include<algorithm>
#include<climits>
#include<string>
#include<stack>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// ------------------------
/// Function Implementations

std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
    
    
    // Set the stack frame
    std::vector<std::vector<int>> returnVector;
    uint32_t buffer = 0;
    
    for(int index = 0; index < matrix.size(); index++)
        for(int jindex = 0; jindex < matrix[index].size(); jindex++){
            
            // Create a new line
            returnVector.push_back(std::vector<int>());
            
            // Reset the buffer
            buffer = 0;
            
            // Top Relative
            if((index - 1) >= 0)
                for(int kindex = jindex - 1; (kindex <= jindex + 1); kindex++)
                    if((kindex >= 0) && (kindex < matrix[index - 1].size())) 
                        if(matrix[index - 1][kindex]) buffer++;

            // Center
            if((jindex - 1) >= 0) if(matrix[index][jindex - 1]) buffer++;
            if((jindex + 1) < matrix[index].size()) if(matrix[index][jindex + 1]) buffer++;
            
            // Bottom Relative
            if((index + 1) < matrix.size())
                for(int kindex = jindex - 1; (kindex <= jindex + 1); kindex++)
                    if((kindex >= 0) && (kindex < matrix[index + 1].size())) 
                        if(matrix[index + 1][kindex]) buffer++;

            returnVector[index].push_back(buffer);
            
        }

    
    for(int index = returnVector.size() - 1; index >= 0; index--)
        if(!(returnVector[index].size())) returnVector.pop_back();

    // Finally, return the resulting vector
    return returnVector;

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	uint32_t rows       ;
	uint32_t columns 	;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> rows >> columns;

		std::vector<std::vector<bool>> matrix(rows, std::vector<bool>(columns, false));

		for(uint32_t row = 0; row < matrix.size(); row++)
			for(uint32_t column = 0; column < matrix[row].size(); column++) {

				std::string boolean = "";

				std::cin >> boolean;

				matrix[row][column] = std::stoi(boolean);

			}

		std::vector<std::vector<int>> mines = minesweeper(matrix);

		for(uint32_t row = 0; row < mines.size(); row++) {

			for(uint32_t column = 0; column < mines[row].size(); column++) {

				std::cout << mines[row][column] << " ";

			}

			std::cout << std::endl;

		}

		std::cout << std::endl;

	}

	return SUCCESS;

}


