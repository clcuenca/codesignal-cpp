/// CodeSignal - Intro - Exploring the Waters
/// Alternating Sums
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

std::vector<int> alternatingSums(std::vector<int> a) {
    
    std::vector<int> weights(2, 0);
    
    for(uint32_t index = 0; index < a.size(); index++) {
        
        if(!(index % 2)) weights[0] += a[index];
        else             weights[1] += a[index];
        
    }
    
    return weights;

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

		array = alternatingSums(array);

		std::cout << array[0] << " " << array[1] << std::endl;


	}

	return SUCCESS;

}


