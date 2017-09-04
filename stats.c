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
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */

int print_statistics(int array[]){
  int maximum = find_maximum(array[]);
  int minimum = find_minimum(array[]);
  int mean = find_mean(array[]);
  int median = find_median(array[]);
  printf("The Maximum value of the array is=%d\n", maximum);
  printf("The Minimum value of the array is=%d\n", minimum);
  printf("The mean value of the array is=%d\n", mean);
  printf("The median value of the array is=%d\n", median);
}

int charToNum(char character){
  int convertedValue;
    if(character - 0 < 0){
      convertedValue = (int)(255 + (character - 0) + 1);
    }else{
      convertedValue = (int)(character - 0);
    }
    return convertedValue;
}

void print_array(char array[], int length){
    int i=0;
    for( i=0; i<length; i++){
      printf("%d\t", charToNum(array[i]));
     }
}

int find_median(char array[], int length){
  array = sort_array(array, length);
  int middleElm;
  int median;
  if(length %2 == 0){
    middleElm = length/2;
  }else{
    middleElm = (length + 1)/2;
  }
  median = median[middleElm];
  median = charToNum(median);
  return median;
}

float find_mean(char array[], int length){
  int i=0, sum=0;
    float mean;
    
    for(i=0; i<length; i++){
      sum = sum + charToNum(array[i]);
    }
    mean = sum/length;
    return mean;
}

int find_maximum(char array[], int length){

  int i=0, maximum=0, next;
    maximum = charToNum(array[i]);
    
    for(i=1; i< length; i++){
      next = charToNum(array[i]);
      if(next > maximum){
        maximum = next;
      }
    }
    printf("%d", maximum);
  
}

int find_minimum(char array[], int length){

  int i=0, minimum=0, next;
    minimum = charToNum(array[i]);
    
    for(i=1; i< length; i++){
      next = charToNum(array[i]);
      if(next < minimum){
        minimum = next;
      }
    }
    return minimum;
}

int sort_array(char array[], int length) {
  int i=0, j=0;
  char swap;
  for (i = 0 ; i < ( length - 1 ); i++)
  {
    for (j = 0 ; j < length - i - 1; j++)
    {
      if (array[j] < array[j+1]) /* For decreasing order use < */
      {
        swap       = array[j];
        array[j]   = array[j+1];
        array[j+1] = swap;
      }
    }
  }
 print_array(array, length);
 return array;
}
