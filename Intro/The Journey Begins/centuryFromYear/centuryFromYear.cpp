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

int centuryFromYear(int);

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	int      year       ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> year;

		std::cout << centuryFromYear(year) << std::endl;

	}

	return SUCCESS;

}

/// ------------------------
/// Function Implementations

int centuryFromYear(int year) {

	int century = year/100;

	if(year % 100) century++;

	return century;

}