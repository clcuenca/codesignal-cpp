/// CodeSignal - Intro - Edge of the Ocean
/// Shape Area
/// Author: Carlos L. Cuenca
/// Date: 10/29/2020

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

int shapeArea(int n) {

	uint32_t area = 1;

	for(uint32_t number = n; number > 0; number--) {

		area += 4*(number - 1);

	}

	return area;

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount ;
	uint32_t number     ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> number;

		std::cout << shapeArea(number) << std::endl;

	}

	return SUCCESS;

}


