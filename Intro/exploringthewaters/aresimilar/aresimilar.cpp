/// CodeSignal - Intro - Exploring The Waters
/// Are Similar?
/// Author: Carlos L. Cuenca
/// Date: 10/30/2020

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

bool areSimilar(std::vector<int> a, std::vector<int> b) {

    std::stack<std::pair<int, int>> pairs;

	for(uint32_t index = 0; index < a.size(); index++)
        if(a[index] != b[index]) pairs.push({a[index], b[index]});
    
    bool canSwap = !(pairs.size());
    
    while(pairs.size() == 2) {
        
        std::pair<int, int> top = pairs.top();
        
        pairs.pop();
        
        canSwap = (top.first == pairs.top().second) &&
                    (top.second == pairs.top().first);
                    
    }
    
    return canSwap;

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

		std::vector<int> array1(arraySize, 0);
		std::vector<int> array2(arraySize, 0);

		for(uint32_t index = 0; index < array1.size(); index++)
			std::cin >> array1[index];

		for(uint32_t index = 0; index < array2.size(); index++)
			std::cin >> array2[index];

		std::cout << areSimilar(array1, array2) << std::endl;

	}

	return SUCCESS;

}


