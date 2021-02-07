/// Code Signal
/// Naming Roads
/// Author: Carlos L. Cuenca
/// Date: 10/16/20
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstring>
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

	int roadCount;
	int vertex;
	int city;
	int name;

	std::cin >> roadCount;

	std::vector<std::vector<int>> roads;

	for(int index = 0; index < roadCount; index++) {

		std::cin >> vertex >> city >> name;

		roads.push_back({vertex, city, name });

	}
        
    int maximum = 0;
    
    for(int index = 0; index < roads.size(); index++) {
        
        if(roads[index][0] > maximum) maximum = roads[index][0];
        if(roads[index][1] > maximum) maximum = roads[index][1];
        
    }

    int** matrix = new int*[maximum + 1];

    for(int index = 0; index < maximum + 1; index++)
		matrix[index] = new int[maximum + 1];    
    
    for(int index = 0; index <= maximum; index++)
        for(int jindex = 0; jindex <= maximum; jindex++) {

            matrix[index][jindex] = -1;

        }
    
    for(int index = 0; index < roads.size(); index++) {

        matrix[roads[index][0]][roads[index][1]] = roads[index][2];
        matrix[roads[index][1]][roads[index][0]] = roads[index][2];
        
    }
    
    std::string printString = "true";
    
    for(int index = 0; index < maximum + 1; index++)
        for(int jindex = 0; jindex < maximum + 1; jindex++) {
        
            if(matrix[index][jindex] != -1) {
                
                for(int kindex = jindex + 1; kindex < maximum + 1; kindex++) {
                    
                    if(matrix[index][kindex] != -1) {
                        
                        int difference = std::abs(matrix[index][kindex] - matrix[index][jindex]);
                        
                        if(difference == 1) printString = "false";
                        
                    }
                    
                }

            }
        }
        
    for(int index = 0; index < maximum + 1; index++)
        delete[] matrix[index];
        
    delete[] matrix;          
    
    std::cout << printString << std::endl;

	return SUCCESS;

}