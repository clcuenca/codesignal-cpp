/// CodeSignal - Intro - Island of Knowledge
/// Are Equally Strong
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

bool areEquallyStrong(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {

    return ((yourLeft == friendsLeft) || (yourLeft == friendsRight))
    && ((yourRight == friendsLeft) || (yourRight == friendsRight));

}

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

	/// -----------------
	/// Program Variables

	uint32_t inputCount   ;
	uint32_t yourLeft     ;
	uint32_t yourRight    ;
	uint32_t friendsLeft  ;
	uint32_t friendsRight ;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> yourLeft >> yourRight >> friendsLeft >> friendsRight;

		std::cout << areEquallyStrong(yourLeft, yourRight, friendsLeft, friendsRight) << std::endl;

	}

	return SUCCESS;

}


