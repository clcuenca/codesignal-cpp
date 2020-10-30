/// CodeSignal - Intro - Edge of the Ocean
/// Make Array Consecutive 2
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

int makeArrayConsecutive2(std::vector<int> statues) {

    std::sort(statues.begin(), statues.end());
    
	uint32_t required = 0;
    
    for(uint32_t index = 0; index < statues.size() - 1; index++) {
        
        required += statues[index + 1] - statues[index] - 1;
        
    }

	return required;

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

		std::cout << makeArrayConsecutive2(array) << std::endl;

	}

	return SUCCESS;

}


