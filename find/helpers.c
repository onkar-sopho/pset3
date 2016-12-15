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
    // TODO: implement a searching algorithm - here linear search
  
    if (n < 0)
    {
        return false;
    }
      
    for (int i = 0; i < n; i++)
    {
        if (values[i] == value)
        {
            return true;
        }
    }
   
    return false;
}

/**
 * Sorts array of n values.
 */

void sort(int values[], int n)
{
    // insertion sort is implemented here
    
    for (int i = 0; i < n; i++)
    {
        // Element that is currently moving into sorted portion
        int element = values[i];
        
        int j = i;
        
        // Move through the sorted portion
        while(j > 0 && values[j - 1] > element)
        {
            // Make space for the new sorted element
            values[j] = values[j - 1];
            j = j - 1;
        }
        
        // Insert the new element
        values[j] = element;
        
        
    }
    
}
