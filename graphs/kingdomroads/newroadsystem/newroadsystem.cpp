/// Code Signal
/// New Road System
/// Author: Carlos L. Cuenca
/// Date: 10/16/20

#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<climits>
#include<algorithm>

/// -----------------
/// Program Constants

const int SUCCESS = 0;

/// --------------
/// Driver Program

int main(int argc, char* argv[]) {

    /// -----------------
    /// Program Variables

	int number;
	int inputCount;

	/// -------
	/// Program

	std::cin >> inputCount;

	while(inputCount--) {

		std::cin >> number;

		std::vector<std::vector<bool>> roadRegister(number, std::vector<bool>(number, false));

		for(int index = 0; index < number; index++)
			for(int jindex = 0; jindex < number; jindex++)
				std::cin >> roadRegister[index][jindex];

		std::vector<std::pair<int, int>> cities(roadRegister.size(), {0, 0}); 
	    
	    for(uint32_t index = 0; index < roadRegister.size(); index++)
	        for(uint32_t jindex = 0; jindex < roadRegister[index].size(); jindex++) {
	            
	            if(roadRegister[index][jindex]) {
	                
	                cities[jindex].first++;
	                cities[index].second++;
	                
	            }
	            
	        }
	        
	    bool result = true;
	        
	    for(uint32_t index = 0; index < cities.size(); index++) {
	        
	        result &= (cities[index].first == cities[index].second);
	        
	        if(!result) break;
	        
	    }
	    
	    if(result) std::cout << "true" << std::endl;
	    else std::cout << "false" << std::endl;

	}

	return SUCCESS;

}
