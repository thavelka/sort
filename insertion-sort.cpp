//============================================================================
// Name        : insertion-sort.cpp
// Author      : Alex Huddleston
// Date        : 9/24/14
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
	num_cmps=0;
    int k;
	int j;
	bool done;
	for(int i = 1; i < size; ++i)
	{
		k = A[i];
		j = i - 1;
		done = false;
		while(!done)
		{
			if(A[j] > k)
			{
				A[j + 1] = A[j];
				--j;
                num_cmps++;
				if(j < 0)
					done = true;
			}
			else
			{
				done = true;
			}
		}
		A[j+1]=k;
	}
    
    Sort::getNumCmps();
}
