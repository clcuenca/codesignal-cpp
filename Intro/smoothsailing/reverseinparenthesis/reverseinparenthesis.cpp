/// CodeSignal - Intro - Smooth Sailing
/// Reverse In PArenthesis
/// Author: Carlos L. Cuenca
/// Date: 10/29/2020

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

std::string reverseInParentheses(std::string inputString) {
    
    std::stack<std::pair<int, int>>  track ;
    std::vector<std::pair<int, int>> pairs ;
    
    for(uint32_t index = 0; index < inputString.size(); index++) {
        
        if(inputString[index] == '(') track.push({index, -1});
        
        if(inputString[index] == ')') {
            
            track.top().second = index;
            
            std::reverse(inputString.begin() + track.top().first, 
            inputString.begin() + track.top().second);
            
            track.pop();
            
        } 
        
    }
    
    std::string returnString = "";
    
    for(uint32_t index = 0; index < inputString.size(); index++) {
        
        if(inputString[index] != '(' && inputString[index] != ')')
            returnString += inputString[index];
        
    }
    
    return returnString;

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

		std::cout << reverseInParentheses(input) << std::endl;

	}

	return SUCCESS;

}


