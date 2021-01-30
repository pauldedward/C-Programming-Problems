/*
Problem 1:
    Given an array of numbers and a window size of k, print the maximum of numbers inside the window
    for each step as the window moves from the biggining of array.
Input format:
    input contains the array size , elements and the window size
Output format:
    print the maximum of numbers
Sample input:
    8
    1   3   5   2   1   8   6   9
    3
Sample output:
    5   5   5   8   8   9
*/

#include <stdio.h>
#include <limits.h>

void main()
{
    system("cls");
    int size, array[100],windowSize,maxValue = INT_MIN;
    
    printf("\nEnter the size of the array : ");
    scanf("%d",&size);

    for(int index = 0; index < size; index++ )
    {
        printf("\nEnter Element[%d] : ",(index + 1) );
        scanf("%d",&array[index]);
    }

    printf("\nEnter Sliding window size : ");
    scanf("%d",&windowSize);
    
    if( windowSize > size )
    {
        windowSize = size;
    }

    for(int index = 0; index < size; index++ )
    {

        if(index + windowSize > size )
        {
            break;
        }

        for(int slidingIndex = index; slidingIndex < index + windowSize; slidingIndex++)
        {
            if(maxValue < array[slidingIndex])
            {
                maxValue = array[slidingIndex];
            }
        }

        printf("%d\t",maxValue);
        maxValue = INT_MIN;
    }

    
}