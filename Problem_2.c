/*
Add two numbers in given base without converting base
Input Format:
    get two numbers and base
Output format:
    Display sum
Sample Input:
    1010 11001 2
Sample Output:
    100011
*/

#include <stdio.h>


int validateBase(int base, int number)
{
   int quotient = number, remainder;

   while (quotient != 0)
   {
       remainder = quotient % 10;
       if(remainder >= base )
       {
           printf("\nNot valid number");
           return 1;
       }
       quotient = quotient / 10;
   }
   
   return 0;
   
}

int main()
{
    int temp,numberOne, numberTwo, sum, base, carry, quotientOne, quotientTwo, remainderOne, remainderTwo, power;

    system("cls");
    
    printf("\nEnter base : ");
    scanf("%d",&base);
    
    printf("\nEnter number 1 : ");
    scanf("%d",&numberOne);

     if(validateBase(base,numberOne))
    {
        return 0;
    }

    printf("\nEnter number 2 : ");
    scanf("%d",&numberTwo);

    if(validateBase(base,numberTwo))
    {
        return 0;
    }
    
    quotientOne = numberOne;
    quotientTwo = numberTwo;
    sum = 0;
    carry = 0;
    power = 1;
    temp = 0;
    
    while(quotientOne != 0 || quotientTwo != 0)
    {
        
        remainderOne = quotientOne % 10;
        remainderTwo = quotientTwo % 10;
        
        temp = (remainderOne + remainderTwo + carry);
        
        carry = temp / base;
        temp = temp % base;
        

        sum = sum + ( temp * power);

        quotientOne = quotientOne / 10;
        quotientTwo = quotientTwo / 10;
        power *= 10;
        
    }

    sum = sum + (carry * power);

    printf("\n Sum : %d",sum);

    return 0;
}

