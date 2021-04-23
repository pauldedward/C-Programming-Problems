// cyclic number verification
// verify the given number is cyclic or not
// Input Format
// Num1 num2
// Constraints
// 1<=range<=9999999999
// Sample Input 1
// 12345 45123
// Sample Output 1
// Yes
// Sample Input 2
// 12345 54123
// Sample Output 2
// No

#include <stdio.h> 

int main() {

    long long int numberOne, numberTwo, rotated;
    int  power = 1, degree = 0;

    system("cls");
    printf("\nEnter no 1 : ");
    scanf("%lld",&numberOne);
    printf("\nEnter no 2 : ");
    scanf("%lld",&numberTwo);
    
    while(numberOne / power) {
        degree++;
        power *= 10;
    }

    power /= 10;
    rotated = numberOne;
    
    while(rotated != numberTwo && degree != 0)
    {
        rotated = (rotated % 10) * power + (rotated / 10);
        degree--;
    }

    if(rotated == numberTwo) {
        printf("\nYes");
    } else {
         printf("\nNo");
    }


    return 0;
}