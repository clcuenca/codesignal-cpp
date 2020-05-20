
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

/**
 * Returns the amount of ways to sum the integer n
 *
 * Problem #26
 *
 * @author Carlos L. Cuenca
 * @date 05/19/2020
 */

int CodeSignal::LoopTunnel::countSumOfTwoRepresentations2(int n, int l, int r) {

    int count = 0;

    for(int index = l; index <= r; index++) {

        if(index <= (n - index) && (n - index) <= r) count++;

    }
    
    return count;

}

int main() {


	return 0;
}