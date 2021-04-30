// Find a Sub string
//  Find if a String2 is substring of String1. If it is, return the index of the first occurrence. else
// return -1.
// Sample Input 1
// thistest123string
// 123
// Sample Output 1
// 8

#include <stdio.h>

int main()
{
    char stringOne[50], stringTwo[50];
    int len, subLen, indexOut = 0, indexIn = 0;

    system("cls");
   
    printf("\nEnter string one : ");
    scanf("%s", stringOne);
    
    printf("\nEnter string two : ");
    scanf("%s", stringTwo);

    for (len = 0; stringOne[len]; len++);
    for (subLen = 0; stringTwo[subLen]; subLen++);

    if(subLen > len) 
    {
        printf("\n-1 longer than original");
        return 0;
    }
    else
    {
        while(stringOne[indexOut])
        {
            if(stringOne[indexOut] == stringTwo[0])
            {
                indexOut++;
                indexIn = 1;

                while (stringOne[indexOut] && stringTwo[indexIn] && stringOne[indexOut] == stringTwo[indexIn])
                {
                    indexOut++;
                    indexIn++;
                }
                
                
            } else
            {
                indexOut++;
            }

            if(stringOne[indexOut] == 0|| stringTwo[indexIn] == 0)
            {
                break;
            }
            
        }

    }

    if(stringTwo[indexIn] == 0)
    {
        printf("\n%d", indexOut - subLen);
    }
    else
    {
        printf("-1 no duplicate");
    }

    return 0;
}
