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
    // TODO: implement a searching algorithm
  
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
    int temp;
    
    for (int i = 0; i < n; i++)
    {
        int small = i;
        for (int j = i + 1; j < n; j++)
        {
            if (values[j] < values[small])
                small = j;
        }
        
        temp = values[small];
        values[small] = values[i];
        values[i] = temp;
    }
    
}
