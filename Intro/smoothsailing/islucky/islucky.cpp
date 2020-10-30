/// CodeSignal - Intro - Smooth Sailing
/// Is Lucky
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

bool isLucky(int n) {
    
    uint32_t firstSum  = 0;
    uint32_t secondSum = 0;
    uint32_t digits    = 0;
    uint32_t copy      = n;
    
    while(copy) { ++digits; copy /= 10; }
    
    for(uint32_t count = 0; count < digits; count++) {
        
        if(count < digits / 2) secondSum += (n % 10);
        else                   firstSum  += (n % 10);
        
        n /= 10;
        
    }
    
    return firstSum == secondSum;

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	uint32_t input      ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> input;

		std::cout << isLucky(input) << std::endl;

	}

	return SUCCESS;

}


