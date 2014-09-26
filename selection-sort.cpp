//============================================================================
// Name        : selection-sort.cpp
// Author      : Timothy Havelka
// Date        : 9/24/14
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
SelectionSort::sort(int A[], int size)				// main entry point
{
	int min;
	num_cmps=0;
    
	for(int i=0;i<size;i++) {
        
		min=i;                          //reset min
		
		for(int j=i+1;j<size;j++) {
			
			if(A[j]<A[min]) {
				num_cmps++;             //cmp made. increase count.
				min=j;                  //if new min, set min
			}
			else{num_cmps++;}           //else, inc cmp, leave min
		}
        
        int temp=A[i];                  //set temp
        A[i]=A[min];                    //swap
        A[min]=temp;
	}
	
    Sort::getNumCmps();		//return number of comparisons
}
