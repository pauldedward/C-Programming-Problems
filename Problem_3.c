/*
Alternate index sort in unsorted array(both ascending and descending)
( no extra space)
Sample Input 1
    9
    23 7 8 30 18 12 6 28 16
Sample Output 1
    23 7 18 12 16 28 8 30 6
*/

#include <stdio.h>

void ascendingSort(int array[], int size)
{
    int temp;
    
    for(int index = 1; index < size - 1 ; index = index + 2)
    {
        for(int sortIndex = index + 2; sortIndex < size; sortIndex = sortIndex + 2)
        {
            if(array[index] > array[sortIndex])
            {
                temp = array[index];
                array[index] = array[sortIndex];
                array[sortIndex] = temp;
            }
        }
    }

}

void descendingSort(int array[], int size)
{
    int temp;

    for(int index = 0; index < size - 1 ; index = index + 2)
    {
        for(int sortIndex = index + 2; sortIndex < size; sortIndex = sortIndex + 2)
        {
            if(array[index] < array[sortIndex])
            {
                temp = array[index];
                array[index] = array[sortIndex];
                array[sortIndex] = temp;
            }
        }
    }
}
void main()
{
    int inputArray[20], size;

    system("cls");
    printf("\nEnter the length of array : ");
    scanf("%d",&size);

    for(int index = 0; index < size; index++)
    {
        printf("Enter number[%d]",index + 1);
        scanf("%d", &inputArray[index]);
    }

    ascendingSort(inputArray,size);
    descendingSort(inputArray,size);

    printf("\nSorted array\n");

    for(int index = 0; index < size; index++)
    {
        printf("\t%d",inputArray[index]);
    }


}
