#include "CodeSignal.hpp"
#include <cmath>

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

    return (int) std::pow(10, n) - 1;

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

/**
 * Returns the amount of people behind you, and to the left given the current
 * rows and columns in the theater and your current row and column within the 
 * theater
 *
 * Problem #4
 * 
 * @author Carlos L. Cuenca
 * @date 07/08/2020
 * @param {Number} nCols The amount of columns in the theater
 * @param {Number} nRows The amount of rows in the theater
 * @param {Number} col The current column you're residing in
 * @param {Number} row The current row you're residing in
 */

int CodeSignal::IntroGates::seatsInTheater(int nCols, int nRows, int col, int row) {

	return (nCols - col + 1) * (nRows - row);

}

/**
 * Returns a largest integer n such that n is divisible by divisor
 * and less than or equal to the bound. The function will subtract the remainder
 * of bound divided by the divisor from the bound to reach the largest n
 *
 * Problem #5
 *
 * @author Carlos L. Cuenca
 * @date 07/08/2020
 * @param {Number} divisor The multiple of n
 * @param {Number} bound The highest n  can reach
 */

int CodeSignal::IntroGates::maxMultiple(int divisor, int bound) {

	return bound - (bound % divisor);

}

/**
 * Given the amount of numbers in a circle, n, and the firstNumber
 * this function will return the radially opposite number from firstNumber
 * within the given range of numbers.
 * Since there are some radially opposite numbers that are less than 
 * the given firstNumber this function takes into account wrap-around
 *
 * Problem #6
 *
 * @author Carlos L. Cuenca
 * @date 7/08/2020
 * @param {Number} n The amount of numbers in the circle
 * @param {Number} firstNumber The number that is the point of reference
 * @return {Number} The radially opposite number from firstNumber
 */

int CodeSignal::IntroGates::circleOfNumbers(int n, int firstNumber) {

	return (firstNumber + n / 2) % n;

}