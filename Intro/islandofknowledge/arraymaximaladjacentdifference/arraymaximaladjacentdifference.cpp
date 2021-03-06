/// CodeSignal - Intro - Island of Knowledge
/// Array Maximal Adjacent Difference
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

int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {

	int maximumDifference = 0;

	for(uint32_t index = 0; index < inputArray.size() - 1; index++)
		maximumDifference = 
			std::max(maximumDifference, std::abs(inputArray[index] - 
						inputArray[index + 1]));

	return maximumDifference;

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

		std::vector<int> array(arraySize);

		for(uint32_t index = 0; index < array.size(); index++)
			std::cin >> array[index];

		std::cout << arrayMaximalAdjacentDifference(array) << std::endl;

	}

	return SUCCESS;

}


