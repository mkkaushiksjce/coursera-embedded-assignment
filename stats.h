/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Kaushik M.K.>
 * @date <04th-September-2017>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
// 1. Print Statistics function 
// A function that prints the statistics of an array including minimum, maximum, mean, and median.
int print_statistics(char array[], int length);
// 2. Print the array
//  Given an array of data and a length, prints the array to the screen
void print_array(char array[], int length);
// 3. Find the median
//  Given an array of data and a length, returns the median value
int find_median(char array[], int length);
// 4. Find the mean
// G Given an array of data and a length, returns the mean
float find_mean(char array[], int length);
// 5. Find the maximum
// Given an array of data and a length, returns the maximum
int find_maximum(char array[], int length);
// 6. Find the minimum
// Given an array of data and a length, returns the minimum
int find_minimum(char array[], int length);
// 7. Sort the array in descending order
// Given an array of data and a length, sorts the array from largest to smallest. 
int sort_array(int array);
// 8. Converts character to number
int charToNum(char character);
/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
