#include "CodeSignal.hpp"

/**
 * Given experience, threshold,  & reward; this function will return
 * a boolean denoting if the player is to reach the next level.
 * 
 * Problem #9
 *
 * @author: Carlos L. Cuenca
 * @since: 07/08/2020
 * @param int experience The amount of experience earned
 * @param int threshold The amount of experience needed to level up
 * @param int reward The amount of awarded experience
 * @return boolean value denoting if the next level has been reached
 */

bool CodeSignal::AtTheCrossroads::reachNextLevel(int experience, int threshold, int reward) {

	return (experience + reward) >= threshold;

}

/**
 * Two weights, their values, & the maximum amount of weight that 
 * can be carried, this method returns the maximum value of the weights
 * 
 * Problem #10
 *
 * @author: Carlos L. Cuenca
 * @since: 07/08/2020
 * @param int value1 The value of the first stone
 * @param int weight1 The weight of the first stone
 * @param int value2 The value of the second stone
 * @param int weight2 The weight of the second stone
 * @return int Value of the maximum amount of stones that can be carried
 */

int CodeSignal::AtTheCrossroads::knapsackLight(int value1, int weight1, int value2, int weight2, int maxW) {
  
    // We can carry both of them
    if((weight1 + weight2) <= maxW) {

        return value1 + value2;

    }

    // If either exceeds the max, you can't carry either them
    if((weight1 > maxW) && (weight2 > maxW)) {

        return 0;

    }

    // Last we make a deduction based on value
    if(value1 >= value2 || weight2 > maxW) {

        return value1;

    }

    return value2;
    
}

/**
 * Given three numbers where two are the same number, this method will return
 * the extra unique number via xor result of all numbers.
 * 
 * Problem #11
 *
 * @author Carlos L. Cuenca
 * @since: 07/13/2020
 * @param a int The first value
 * @param b int The second value
 * @param c int The third value
 * @return The unique value out of all three numbers.
 */

int CodeSignal::AtTheCrossroads::extraNumber(int a, int b, int c) {

	return a ^ b ^ c;

}

/**
 * Given two numbers a & b, this method determines if the loop will
 * run indefinitely 
 * 
 * Problem #12
 *
 * @author Carlos L. Cuenca
 * @since: 07/13/2020
 * @param a int The first value
 * @param b int The second value
 * @return bool indicating if the loop will run indefinitely
 */

bool CodeSignal::AtTheCrossroads::isInfiniteProcess(int a, int b) {

	return (a > b) || ((a-b) % 2);

}

/**
 * Given numbers a, b, & c and an arithmetic expression in the form a#b = c
 * this function checks if it's possible to replace # with one of the four signs
 * +, -, *, or / to obtain a correct expression
 *
 * Problem #13
 * 
 * @author Carlos L. Cuenca
 * @since: 07/13/2020
 * @param a int The value of a
 * @param b int The value of b
 * @param c int the Value of c 
 * @return bool indicating a proper 
 */

bool CodeSignal::AtTheCrossroads::arithmeticExpression(int a, int b, int c) {

	return ((a + b) == c) || ((a - b) == c) || ((a * b) == c) || (((a / b) == c) && !(a%b));

}

/**
 * Given two scores, this function returns a boolean value denoting if a 
 * game could be finished.
 *
 * Problem #14
 *
 * @author Carlos L. Cuenca
 * @since: 07/13/2020
 * @param score1 int The first score
 * @param score2 int The second score
 * @return bool indicating a finishable game.
 */
bool CodeSignal::AtTheCrossroads::tennisSet(int score1, int score2) {

    if((score1 + score2) >= 6){
        
        if((score1 == 6) && (score2 < 5)) return true;
        if((score2 == 6) && (score1 < 5)) return true;
        
    }
    
    if((score1 + score2) >= 12){
            
        if((score1 == 7) && ((score2 == 5) || (score2 == 6))) return true;
        if((score2 == 7) && ((score1 == 5) || (score1 == 6))) return true;
        
    }
    
    return false;

}

/**
 * Returns a resulting boolean value that shatters someones beliefs
 *
 * Problem #15
 *
 * @author Carlos L. Cuenca
 * @date 07/13/2020
 * @param young bool Denoting age
 * @param beautiful bool Denoting beauty
 * @param loved bool Denoting love
 * @return bool Shattering expectations
 */
bool CodeSignal::AtTheCrossroads::willYou(bool young, bool beautiful, bool loved) {

    return (young && beautiful && !loved) ^ (loved && !(young && beautiful));

}

/**
 * Given the last number of days in a month, this method returns a collection
 * of the next possible number of days the card can be extended
 *
 * Problem #16
 *
 * @param lastNumberOfDays int The last count of number of days
 * @return std::vector<int> A collection of the possible number or days that
 * can be reloaded onto the card
 */
std::vector<int> CodeSignal::AtTheCrossroads::metroCard(int lastNumberOfDays) {

    std::vector<int> returnVector;
    
    int MONTH_30 = 30;
    int MONTH_31 = 31;
    int MONTH_28 = 28;
    
    // January, March, May, July, August, October, December
    if(lastNumberOfDays == MONTH_31){
        
        returnVector.push_back(MONTH_28);
        returnVector.push_back(MONTH_30);
        
    }
    
    // Feburary, April, June, September, November
    returnVector.push_back(MONTH_31);
    
    return returnVector;

}
