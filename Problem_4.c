/*
Array with threshold value
Given an array and a threshold value find the o/p
i/p {5,8,10,13,6,2}
threshold = 3
o/p count = 17
explanation:
Number parts counts
    5 {3,2} 2
    8 {3,3,2} 3
    10 {3,3,3,1} 4
    13 {3,3,3,3,1} 5
    6 {3,3} 2
    2 {2} 1
Input Format :
    N - no of elements in an array
    array of elements
    threshold value
Output Format :
    display the count
Sample Input :
    6
    5 8 10 13 6 2
    3
Sample Output :
    17 

*/

#include<stdio.h>

void main()
{
    int inputArray[20], size, threshold,count;

    system("cls");
    printf("\nEnter the length of array : ");
    scanf("%d",&size);

    for(int index = 0; index < size; index++)
    {
        printf("Enter number[%d]",index + 1);
        scanf("%d", &inputArray[index]);
    }

    printf("\nEnter the threshold : ");
    scanf("%d", &threshold);

    count = 0;

    for(int index = 0; index < size; index++)
    {
        count += (inputArray[index] / threshold);
        if( (inputArray[index] % threshold) > 0 )
        {
            count++;
        }
    }

    printf("\ncount : %d",count);


}