/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>
#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

bool search(int value, int values[], int n)
{
    // Reimplemented the function using binary search
  
    int first, last, middle;
    first = 0;
    last = n - 1;
    middle = (first + last) / 2;
  
    if (n < 0)
    {
        return false;
    }
    
    while(first <= last)
    {
        if (values[middle] == value)
        {
            return true;
        }
      
        else if (values[middle] < value)
        {
            first = middle + 1;
            middle = (first + last) / 2;
        }
     
        else if (values[middle] > value)
        {
            last = middle - 1;
            middle = (first + last) / 2;
        }
     
     
    }
  
    if (first > last)
    {
        return false;
    }
   
    return false;
    
}

/**
 * Sorts array of n values.
 */

void sort(int values[], int n)
{
    // Bubble sort is implemented here
    
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[min])
            {
                min = j;
            }
        }
        
        if (min != i)
        { 
            int swap = values[i];    
            values[i] = values[min];  
            values[min] = swap;
        }
              
    }
   
}
