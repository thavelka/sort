//============================================================================
// Name        : bubble-sort.cpp
// Author      : Timothy Havelka
// Date        : 9/24/14
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)		// main entry point
{
  /* Complete this function with the implementation of bubble sort algorithm 
     Record number of comparisons in variable num_cmps of class Sort
  */
  	num_cmps=0;                         //reset number of comparisons
    
	for (int i=1; i<size; i++) {
        
        bool swap=false;
		
        for(int j=0;j<size-i;j++) {
            
            num_cmps++;                 //cmp made here, increment count
            
			if(A[j+1]<A[j]) {
				int tmp = A[j];         //set temp
				A[j]=A[j+1];            //swap
				A[j+1]=tmp;
				swap=true;              //set swap true
			}
			
		}
        
        if (!swap) break;
	}
    Sort::getNumCmps();

}
