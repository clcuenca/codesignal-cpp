/// Code Signal
/// Roads Building
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

	int cities                          ;
	int inputCount                      ;
	int roadCount 				    	;
	std::vector<std::vector<int>> roads ;

	/// -------
	/// Program

	std::cin >> inputCount;
	
	while(inputCount--) {

		std::cin >> cities;

		std::cin >> roadCount;

		for(int index = 0; index < roadCount; index++) {

			std::vector<int> road(2, 0);

			std::cin >> road[0] >> road[1];

			roads.push_back(road);

		}

		std::vector<std::vector<bool>> ruleMatrix(cities, std::vector<bool>(cities, false));
    	std::vector<std::vector<int>> returnMatrix;
    
    	for(int index = 0; index < roads.size(); index++) {
        
        	ruleMatrix[roads[index][0]][roads[index][1]] = true;
        	ruleMatrix[roads[index][1]][roads[index][0]] = true;
        
    	}

    	for(int index = 0; index < ruleMatrix.size(); index++)
        	for(int jindex = 0; jindex < ruleMatrix[index].size(); jindex++)
            
            	if(index != jindex && !ruleMatrix[index][jindex]) {
                	returnMatrix.push_back({index, jindex});
             
                	ruleMatrix[jindex][index] = true;
                
            	}
    
    	std::sort(returnMatrix.begin(), returnMatrix.end());

    	std::cout << "[";

    	for(int index = 0; index < returnMatrix.size(); index++){
    		std::cout << "[" << returnMatrix[index][0] << "," << returnMatrix[index][1] << "]";
 		
 			if(index != returnMatrix.size() - 1) std::cout << "," << std::endl;

    	}

    	std::cout << "]";


	}

	return SUCCESS;

}
