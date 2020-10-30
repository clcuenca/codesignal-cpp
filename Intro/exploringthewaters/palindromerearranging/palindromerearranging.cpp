/// CodeSignal - Intro - Exploring the Waters
/// Palindrome Rearranging
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

bool palindromeRearranging(std::string inputString) {

    std::vector<int> hash('z' - 'a');
    
    uint32_t fault = 0;
    
    for(uint32_t index = 0; index < inputString.size(); index++)
        hash[inputString[index] - 'a']++;
        
    for(uint32_t index = 0; index < ('z' - 'a'); index++) {
        
        if(hash[index] % 2) fault++;
        
        if(fault > 1) break;
        
    }

    return fault <= 1;
    
}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t    inputCount ;
	std::string input      ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> input;

		std::cout << palindromeRearranging(input) << std::endl;

	}

	return SUCCESS;

}


