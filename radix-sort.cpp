//============================================================================
// Name        : radix-sort.cpp
// Author      : Devin Carr
// Date        : 9/22/2014
// Copyright   :
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
#include <cstring>
#include <cmath>

void
RadixSort::sort(int A[], int size)
{
  int low = A[0];
  int thing[size];
  for (int i = 0; i < size; ++i) {
    thing[i] = A[i];
  }
  // Check for negative values and make the lowest zero
  for (int i = 1; i < size; ++i) {
    if (low > thing[i])
      low = thing[i];
  }
  for (int i = 0; i < size; ++i) {
    thing[i] += abs(low);
  }
  // Find max
  int max = thing[0];
  for (int i = 1; i < size; ++i) {
    if (thing[i] > max)
      max = thing[i];
  }
  // Interate through digit placements
  for (int a = 1; max/a > 0; a *= 10) {
    int other[size];
    int count[10] = {0};
    for (int i = 0; i < size; ++i) {
      
      count[(thing[i]/a)%10]++;
    }
    for(int i = 1; i < 10; ++i)
      count[i] += count[i-1];
    for(int i = size-1; i >= 0; --i) {
      
      other[count[(thing[i]/a)%10] - 1] = thing[i];
      count[(thing[i]/a)%10]--;
    }
    
    // copy back into inital array
    for (int i = 0; i < size; ++i)
      thing[i] = other[i];
  }
  // Return values back if there was negatives
  for (int i = 0; i < size; ++i)
    A[i] = thing[i] - abs(low);
}
