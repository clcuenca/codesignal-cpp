/// CodeSignal - Intro - Smooth Sailing
/// Sort By Height
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

std::vector<int> sortByHeight(std::vector<int> array) {
    
    std::vector<int> people;
    
    for(uint32_t index = 0; index < array.size(); index++)
        if(array[index] != -1) people.push_back(array[index]);
        
    std::sort(people.begin(), people.end());
    
    uint32_t currentIndex = 0;
    
    for(uint32_t person = 0; person < people.size(); person++) {
        
        while(array[currentIndex] == -1) currentIndex++;
        
        array[currentIndex] = people[person];
        
        currentIndex++;
        
    }
    
    // Return the array
    return array;

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

		array = sortByHeight(array);

		for(uint32_t index = 0; index < array.size(); index++)
			std::cout << array[index] << " ";

		std::cout << std::endl;

	}

	return SUCCESS;

}


