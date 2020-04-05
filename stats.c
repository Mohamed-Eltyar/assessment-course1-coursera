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
  float   mean_number;
  float median_number;
  int  maximum_number;
  int  minimum_number;
  /* Statistics and Printing Functions Go Here */
  print_array(test,SIZE);
  mean_number=find_mean(test,SIZE);
  median_number=find_median(test,SIZE);
  maximum_number=find_maximum(test,SIZE);
  minimum_number=find_minimum(test,SIZE);
  sort_array(test,SIZE);
  printf("\n\n the array after sort is: \n");
  print_array(test,SIZE);
  print_statistics(minimum_number,maximum_number,mean_number,median_number);
}


/* Add other Implementation File Code Here */

void print_array(unsigned char *array,unsigned int length) 
{
		for (int i=0;i<length;i++)			// iteration from the first element of array to end to print all data 
	{
		if (i%10==0 && (i !=0))
			printf("\n");
		printf("%d\t",array[i]);			// use printf() to print the data
		
	}
	
}

unsigned char  find_median(unsigned char *array,unsigned int length) 	
{
		int num1,num2,num3;           // variables to get the middle value from array
	unsigned char median=0;
	
	// use modulus operation to check if the size is even or odd
	if (length%2==0)  								// the length of array is even
	{
		num1=length/2;	
		num2=num1+1;
		median=(array[num1]+array[num2])/2; 		/* sum two middle number then divide by 2 
													   Ex: if length is 40>> (array[20]+array[21])/2  */
	}
	else						  // the length of array is odd
	{
		num3=(length/2)+1;
		median=array[num3];
	}
	
	return median;
}

unsigned char 	  find_mean(unsigned char*array,unsigned int length)
{
	int sum=0; 							// to get summation of all element in array
	unsigned char mean;		// the average of array
	for (int i=0;i<length;i++)
	{
		sum+=array[i];
	}
	mean= sum/length;
	return mean;
}

unsigned char find_maximum(unsigned char *array,unsigned int length)
{
	unsigned char searche=array[0];  		// variable to compare with elements and initialed by first element
	for (int i=1;i<length;i++)
	{
		if (searche>array[i]) 		// check which is bigger
		{
			searche=array[i]; 		//store the big value 
		}
	}
	return searche;
}

unsigned char find_minimum(unsigned char *array,unsigned int length)
{
	unsigned char searche=array[0];			// variable to compare with elements and initialed by first element
	for (int i=1;i<length;i++)
	{
		if (searche<array[i])				// check which is smaller
		{
			searche=array[i];				//store the small value
		}
	}
	return searche;
}

void 		   sort_array(unsigned char *array, unsigned int length)
{
	for (int i=0;i<length;i++)					// first loop to initiate sort every time
	{
		for (int j=0;j<length-i-1;j++)			// second loop to sort the array 
		{
			if ( array[j]<array[j+1] )
			{int temp=array[j+1]; 			// third variable to store data and return back 
				array[j+1]=array[j];
				array[j]=temp;
			}
		}
	}
}

void print_statistics(unsigned char mini, unsigned char max,
				   		 unsigned char mean, unsigned char median)
{
		// this function use only to print the statistics of the array
	printf("\n\n");
	printf("the minimum number is %d \n",mini);
	printf("the maximum number is %d \n",max);
	printf("the mean number is %d \n",mean);
	printf("the median number is %d \n",median);
}
