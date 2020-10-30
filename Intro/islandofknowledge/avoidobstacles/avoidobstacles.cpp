/// CodeSignal - Intro - Island of Knowledge
/// Avoid Obstacles
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

int avoidObstacles(std::vector<int> inputArray) {
    
    uint32_t multiple = 2;
    
    for(uint32_t index = 0; index < inputArray.size(); index++) {
        
        if(!(inputArray[index] % multiple)) {
            
            multiple++;
            
            index = -1;
            
        }
        
    }
    
    return multiple;
        
}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	uint32_t arraySize;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> arraySize;

		std::vector<int> array(arraySize);

		for(uint32_t index = 0; index < array.size(); index++)
			std::cin >> array[index];

		std::cout << avoidObstacles(array) << std::endl;

	}

	return SUCCESS;

}


