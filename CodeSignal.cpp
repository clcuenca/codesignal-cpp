
#include "CodeSignal.hpp"
#include <iostream>

/**
 * Finds the smallest factorial result relative to the given integer n
 *
 * Problem #25
 *
 * @author Carlos L. Cuenca
 * @date 05/19/2020
 */

int CodeSignal::LoopTunnel::leastFactorial(int n) {

    int factorial = 1;
    int result    = 1;
    
    while(result < n) result *= factorial++;
    
    return result;

}

int main() {


	return 0;
}