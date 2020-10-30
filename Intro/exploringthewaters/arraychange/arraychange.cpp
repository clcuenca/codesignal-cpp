/// CodeSignal - Intro - Smooth Sailing
/// Array Change
/// Author: Carlos L. Cuenca
/// Date: 10/30/2020

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

int arrayChange(std::vector<int> inputArray) {
    
    int moves      = 0;
    int difference = 0;
    
    for(uint32_t index = 0; index < inputArray.size() - 1; index++) {
        
        if(inputArray[index] >= inputArray[index + 1]) {
            
            difference = inputArray[index] - inputArray[index + 1];
            
            moves += difference + 1;
            
            inputArray[index + 1] += difference + 1;
            
        }
        
    }
    
    return moves;

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

		std::vector<int> array(arraySize, 0);

		for(uint32_t index = 0; index < array.size(); index++)
			std::cin >> array[index];

		std::cout << arrayChange(array) << std::endl;

	}

	return SUCCESS;

}


