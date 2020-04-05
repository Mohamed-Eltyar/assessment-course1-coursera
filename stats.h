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
 * @author <Mohamed Eltyar>
 * @date <05/04/2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void 		   print_array(unsigned char *ptr,unsigned int length);
unsigned char  find_median(unsigned char *ptr,unsigned int length);
unsigned char 	  find_mean(unsigned char*ptr,unsigned int length);
unsigned char find_maximum(unsigned char *ptr,unsigned int length);
unsigned char find_minimum(unsigned char *ptr,unsigned int length);
void 		   sort_array(unsigned char *ptr, unsigned int length);
void print_statistics(unsigned char mini, unsigned char max,
				   		 unsigned char mean, unsigned char median);

/**
 * @brief <Add Brief Description of Function Here>
 *	----------------------------------------------------------------------------------------------------
 *	we used 7 function to complete this assignment:
 *  
 *		 first one is print_array() which take the array and its length to print
 *		 its data by using printf() function in stdlib.h
------------
 *		second one is find_median number; median number mean the middle value in 
 *		in the array and it divided into 2 section:
 *			1- if length is even so the median number get from the division of sum of 2 middle elements of array
 *			2- if length is odd so take the middle element of array
------------
 * 		third one is find_mean; mean is the average of the elements of the array get from sum of all element 
 *		and divided by the number of elements
------------ 
 *		forth one is find_maximum that uses linear search algorithm to find max number in array
------------ 
 *		fifth one is find_minimum that uses linear search algorithm to find mini number in array 
------------
 *		sixth one is sort_array that uses linear sort algorithm to sort array from big to small
------------
 *		the last one is print_statistics that takes all statistics and print it
 --------------------------------------------------------------------------------------------------------
 
 
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
