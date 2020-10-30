/// CodeSignal - Intro - Smooth Sailing
/// All Longest Strings
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

std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    
    uint32_t maximumSize = 0;
    
    std::vector<std::string> longestStrings;
    
    for(uint32_t index = 0; index < inputArray.size(); index++) {
        
        if(inputArray[index].size() > maximumSize) {
            
            maximumSize = inputArray[index].size();
            
            longestStrings.clear();
            
            longestStrings.push_back(inputArray[index]);
            
        } else if (inputArray[index].size() == maximumSize) {
            
            longestStrings.push_back(inputArray[index]);
            
        }
        
    }
    
    return longestStrings;

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount;
	uint32_t arraySize;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> arraySize;

		std::vector<std::string> array(arraySize, "");

		for(uint32_t index = 0; index < array.size(); index++)
			std::cin >> array[index];

		array = allLongestStrings(array);

		for(uint32_t index = 0; index < array.size(); index++)
			std::cout << array[index] << " " << std::endl;

		std::cout << std::endl;

	}

	return SUCCESS;

}


