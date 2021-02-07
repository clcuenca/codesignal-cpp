/// CodeSignal - Intro - The Journey Begins
/// checkPalindrome
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// ----------------------------
/// Program forward declarations

bool checkPalindrome(std::string);

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t    inputCount;
	std::string inputString;
	
	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> inputString;

		std::cout << checkPalindrome(inputString) << std::endl;

	}

	return SUCCESS;

}

/// ------------------------
/// Function Implementations

bool checkPalindrome(std::string inputString) {

	for(uint32_t index = 0; index < inputString.size(); index++) {

		if(inputString[index] != inputString[inputString.size() - index - 1])
			return false;

	}

	return true;

}