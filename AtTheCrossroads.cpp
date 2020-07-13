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

    // Take both if you can carry them
    if((weight1 + weight2) <= maxW) return value1 + value2;
    
    // If either exceeds the max, you can't carry either them
    if((weight1 > maxW) && (weight2 > maxW)) return 0;
    
    // We're here because the condition is exclusive
    // First we make a deduction based on weight
    if((weight1 > maxW) && (weight2 <= maxW)) return value2;
    if((weight2 > maxW) && (weight1 <= maxW)) return value1;
    
    // Last we make a deduction based on value
    if(value1 >= value2) return value1;
    
    return value2;

}
