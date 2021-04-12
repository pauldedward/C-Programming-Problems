//box pattern
#include <stdio.h>

void main() 
{
  
  int n = 6;
  int size = (n * 2) - 1;
  int start = 0, end = size - 1;
  int a[size][size];

  while(n)
  {
    for(int i = start; i <= end; i++)
    {
      for(int j = start; j <= end; j++)
      {
        if(i == start || i == end || j == start || j == end )
        {
          a[i][j] = n;
        }
      }
    }
    start++;
    end--;
    n--;
  }
  for(int i = 0; i < size; i++)
    {
      for(int j = 0; j < size; j++)
      {
        printf("%d ", a[i][j]);
      }
      printf("\n");
    }
  

}