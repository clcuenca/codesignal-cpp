/// CodeSignal - Intro - Edge of the Ocean
/// Adjacent Elements Product
/// Author: Carlos L. Cuenca
/// Date: 10/29/20

#include<iostream>
#include<vector>
#include<cinttypes>
#include<algorithm>
#include<climits>
#include<string>
#include<string>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// ------------------------
/// Function Implementations

int adjacentElementsProduct(std::vector<int> inputArray) {

    int maximumProduct = -999999999;

    for(uint32_t index = 0; index < inputArray.size() - 1; index++) {
        
        int product = inputArray[index]*inputArray[index + 1];
        
        if(product > maximumProduct) maximumProduct = product;
        
    }
    
    return maximumProduct;

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

		std::cout << adjacentElementsProduct(array) << std::endl;


	}

	return SUCCESS;

}
