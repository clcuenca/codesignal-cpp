/// CodeSignal - Intro - The Journey Begins
/// add
/// Author: Carlos L. Cuenca
/// Date: 10/05/20

#include<iostream>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// ----------------------------
/// Program forward declarations

int add(int, int);

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	uint32_t parameter1 ;
	uint32_t parameter2 ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> parameter1 >> parameter2;

		std::cout << add(parameter1, parameter2) << std::endl;

	}

	return SUCCESS;

}

/// ------------------------
/// Function Implementations

int add(int param1, int param2) {

	return param1 + param2;

}