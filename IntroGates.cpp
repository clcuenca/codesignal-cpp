#include "CodeSignal.hpp"

/**
 * Returns the sum of the given number's digits
 *
 * Problem #1
 *
 * @author: Carlos L. Cuenca
 * @date 05/19/2020
 * @param n int The number to sum the digits
 * @return int the sum of the number n's digits
 */

int CodeSignal::IntroGates::addTwoDigits(int n) {

    return (n % 10) + (n / 10);

}

/**
 * Returns the largest base 10 number given the amount of digits, n
 *
 * Problem #2
 *
 * @author Carlos L. Cuenca
 * @date 07/08/2020
 * @param n int the amount of digits the number should have
 * @return int The largest resulting number with n digits
 */

int CodeSignal::IntroGates::largestNumber(int n) {

    return (int) pow(10, n) - 1

}

/**
 * Returns the total amount of whole candy pieces that will be eaten by n children,
 * such that each child eats the same amount of candy as the other children
 * without splitting a candy piece given m total candies.
 * 
 * Problem #3
 *
 * @author Carlos L. Cuenca
 * @date 07/08/2020
 * @param {Number} n The total amount of children
 * @param {Number} m The total amount of candy pieces
 * @param {Number} The total amount of candy that will be eaten between 
 * the children
 */

int CodeSignal::IntroGates::candies(int n, int m) {

    return n * (m / n);

}