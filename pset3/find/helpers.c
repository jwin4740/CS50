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
                for (int j = 0; j < n; j++)
                {
                    if (j < n) 
                    {
                        for (int i = 0; i < n; i++)
                        {   
                            
                            if (values[i] == values[n - 1]) 
                            {
                            printf("%i ", values[n - 1]);
                            }
                            else if (values[i] > values[i + 1])
                            {       
                                temp = values[i];
                                values[i] = values[i + 1];
                                values[i + 1] = temp;
                                printf("%i ", values[i]);
                            }
                            else if (values[i] < values[i + 1])
                            {
                                printf("%i ", values[i]);
                            }
                        }
                        
                        printf("\n");
                    }    
                }
        return;
}