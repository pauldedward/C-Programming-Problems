//this code is dumpshit :(.. might refactor later
//Edit...refactored a bit :|
// Check whether a given mathematical expression is valid.
// Sample Input 1
// (a+b)(c+d+e)
// Sample Output 1
// VALID
// Sample Input 2
// (a+b)(c+d)
// Sample Output 2
// VALID
#include <stdio.h>

int isInString(char* string, char character) {

    int index = 0;
    while(string[index])
    {
        if(string[index] == character) 
        {
            return 1;
        }
        index++;
    }
    
    return 0;
}

int main() 
{
    char inputString[20], operandStack[10], operatorStack[10], pop;
    char operators[] = "+-*/", open[] = "[({", close[] = "])}";
    int topOperand, topOperator, index, flag;

    topOperand = topOperator = -1;
    index = flag = 0;

    system("cls");
    printf("\nEnter expression : ");
    scanf("%s", inputString);

    while(inputString[index])
    {
        if( isInString(open, inputString[index]) == 1)
        {
            operatorStack[++topOperator] = inputString[index];
        }
        else if( isInString(close, inputString[index]) == 1)
        {
            if(topOperator == -1) 
            {
                break;
            }

            pop = operatorStack[topOperator--];

            switch(pop)
            {
                case '(': if( inputString[index] != ')') flag = 1; break;
                case '[': if( inputString[index] != ']') flag = 1; break;
                case '{': if( inputString[index] != '}') flag = 1; break;
            }

            if( flag == 1) 
            {
                flag = 0;
                break;
            }
            
        }
        else if( inputString[index] >= 'a' && inputString[index] <= 'z')
        {
            operandStack[++topOperand] = inputString[index];
            if( !(inputString[index + 1]) ) 
            {
                 topOperand--;
            }
            if( isInString(close, inputString[index + 1]) == 1)
            {
                if(topOperator == -1) 
                {
                    break;
                }

                pop = operatorStack[topOperator--];
                index++;
                topOperand--;

                switch(pop)
                {
                    case '(': if( inputString[index] != ')') flag = 1; break;
                    case '[': if( inputString[index] != ']') flag = 1; break;
                    case '{': if( inputString[index] != '}') flag = 1; break;
                }

                if( flag == 1) 
                {
                    flag = 0;
                    break;
                }
            }
        }
        else if(isInString(operators, inputString[index]) == 1)
        {
            if(topOperand == -1)
            {
                if(index == 0 ||  !(inputString[index + 1]) )
                {
                    break;
                }
                else
                {
                    index++;
                    continue;
                }
                    
            }
            else
            {
                topOperand--;
            }

            if( !(inputString[index + 1] >= 'a' && inputString[index + 1] <= 'z') ) 
            {
                break;   
            }
           
        }
        index++;
    }
   
    if(inputString[index] == 0 && topOperator == -1 && topOperand == -1)
    {
        printf("\nValid %d", index);
    }
    else
    {
       printf("\nInvalid %d %d %d %d", index, inputString[index], topOperator, topOperand); 
    }
    return 0;
}

