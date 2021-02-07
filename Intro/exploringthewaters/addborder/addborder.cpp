/// CodeSignal - Intro - Exploring the Waters
/// Add Border
/// Author: Carlos L. Cuenca
/// Date: 10/29/2020

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

std::vector<std::string> addBorder(std::vector<std::string> picture) {

	std::vector<std::string> borderPicture(picture.size() + 2, std::string(""));

	for(uint32_t index = 0; index < picture[0].size() + 2; index++) 
		borderPicture[0] += "*";

	for(uint32_t row = 1; row < borderPicture.size() - 1; row++)
		for(uint32_t column = 0; column < picture[0].size() + 2; column++) {

			if(column == 0 || column == picture[0].size() + 1)
				borderPicture[row] += "*";

			else {

				borderPicture[row] += picture[row - 1][column - 1];

			}

		}
        
    for(uint32_t index = 0; index < picture[0].size() + 2; index++)
        borderPicture[picture.size() + 1] += "*";

	return borderPicture;

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	uint32_t arraySize  ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> arraySize;

		std::vector<std::string> picture(arraySize, std::string(""));

		for(uint32_t index = 0; index < arraySize; index++)
			std::cin >> picture[index];

		picture = addBorder(picture);

		for(uint32_t index = 0; index < picture.size(); index++)
			std::cout << picture[index] << std::endl;

		std::cout << std::endl;

	}

	return SUCCESS;

}


