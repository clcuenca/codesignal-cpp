/// CodeSignal - Intro - Edge of the Ocean
/// Almost Increasing Sequence
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

bool almostIncreasingSequence(std::vector<int> array) {
    
    uint32_t count = 0;
    uint32_t position = 0;
    
    for(uint32_t index = 0; index < array.size() - 1; index++) {
        
        if(array[index] >= array[index + 1]) {
            
            count++;
            
            position = index;
        
        }
        
    }
    
    bool atBoundary = position == 0 || position >= array.size() - 2;
    
    if(!atBoundary) atBoundary = array[position - 1] < array[position + 1] ||
    array[position] < array[position + 2];
    
    return (count <= 1) && atBoundary;

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

		for(uint32_t index = 0; index < arraySize; index++)
			std::cin >> array[index];

		std::cout << almostIncreasingSequence(array) << std::endl;

	}

	return SUCCESS;

}


