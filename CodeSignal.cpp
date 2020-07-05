
#include "CodeSignal.hpp"
#include <iostream>

/**
 * Returns the sum of the given number's digits
 *
 * Problem #1
 *
 * @author: Carlos L. Cuenca
 * @date 05/19/2020
 */

int CodeSignal::IntroGates::addTwoDigits(int n) {

    return (n % 10) + (n / 10);

}

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

/**
 * Calculates the amount of money given by the magical well
 * when casting a marble
 *
 * Problem #27
 *
 * @author Carlos L. Cuenca
 * @date 07/05/2020
 */

int CodeSignal::LoopTunnel::magicalWell(int a, int b, int n) {

    int salary = 0;

    while(n-- > 0) salary += a++ * b++;

    return salary;

}

int main() {


	return 0;
}