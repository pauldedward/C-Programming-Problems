//number to text
#include<stdio.h>




int main()
{
    char ones[21][10]={"zero" , "one" , "two" , "three" , "four" , "five" , "six" , "seven" ,
    "eight" , "nine" ,"" , "eleven" , "twelve" , "thirteen" , "fourteen" , "fifteen" , "sixteen" ,
    "seventeen" , "eighteen" , "nineteen"};

    char tens[10][9]={"" , "ten","twenty","thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};

    int inputNumber;

    system("cls");

    printf("\nEnter number : ");
    scanf("%d", &inputNumber);
    
   if(inputNumber >=0 && inputNumber <= 99 ) {

       if(inputNumber <= 19) {
           printf("\n%s",ones[inputNumber]);
       } 
       else if(inputNumber % 10 == 0) {
           printf("\n%s",tens[inputNumber / 10]);
       } 
       else {
           printf("\n%s",tens[inputNumber / 10]);
           printf(" %s",ones[inputNumber % 10]);
       }
         
   } 
   else {
        printf("\n%s hundred",ones[inputNumber / 100]);

       if(inputNumber % 100 == 0) {
          printf(" only");   
       } 
       else {
            int reminder = inputNumber % 100;

            if(reminder <= 19) {
                 printf(" and %s",ones[reminder]);
            } 
            else if(reminder % 10 == 0) {
                printf(" and %s",tens[reminder / 10]);
            } 
            else {
                printf(" and %s",tens[reminder / 10]);
                printf(" %s",ones[reminder % 10]);
            }
       }
   }
    


    return 0;
}