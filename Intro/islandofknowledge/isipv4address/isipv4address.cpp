/// CodeSignal - Intro - Island of Knowledge
/// Is Ipv4 Address
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

bool isIPv4Address(std::string inputString) {

	std::stack<std::string> strings;
	uint32_t last = -1;
	bool isAddress = true;

	for(uint32_t index = 0; index < inputString.size(); index++) {

		if(inputString[index] == '.') {

			strings.push(std::string(inputString, last + 1, index - last - 1));
            
			last = index;

		}
        
        if(index == inputString.size() - 1)
            strings.push(std::string(inputString, last + 1, index - last));
        
	}
    
    isAddress = strings.size() == 4;
    
    while(strings.size() && isAddress) {
        
        std::string number = strings.top();
        
        strings.pop();
        
        isAddress &= (number.size() > 0 && number.size() <= 3);
        
        for(uint32_t index = 0; index < number.size() && isAddress; index++) {
            
            isAddress &= (number[index] >= '0' && number[index] <= '9');
            isAddress &= !(number[0] == '0' && number.size() > 1);
            
        }
        
        if(!isAddress) break;
        
        isAddress &= (std::stoi(number) >= 0 && std::stoi(number) <= 255);

    }

	return isAddress;

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

		std::cout << isIPv4Address(input) << std::endl;

	}

	return SUCCESS;

}


