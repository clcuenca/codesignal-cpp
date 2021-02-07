/// CodeSignal - Intro - Smooth Sailing
/// Common Character Count
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

int commonCharacterCount(std::string s1, std::string s2) {
    
	uint32_t shared	       =  0  ;
    uint32_t hash1    [26] = {0} ;
    uint32_t hash2    [26] = {0} ;

	for(uint32_t index = 0; index < s1.length(); index++)
		hash1[s1[index] - 'a']++;

	for(uint32_t index = 0; index < s2.length(); index++)
		hash2[s2[index]  - 'a']++;

	for(uint32_t index = 0; index < 26; index++)
        shared += std::min(hash1[index], hash2[index]);
    
    return shared;

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t    inputCount ;
	std::string string1    ;
	std::string string2    ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> string1;
		std::cin >> string2;

		std::cout << commonCharacterCount(string1, string2) << std::endl;

	}

	return SUCCESS;

}


