#include <stdio.h> 
#include <stdlib.h>
#include "calc.h"


int main()  
{  
    double x, y;
    char operator;


    printf("Choose operator (+ - * / ! s [Square] : ");  
    operator = getchar();
   
    printf("Enter operand/opperands: ");
    if ((operator=='+') || (operator=='-') || (operator=='*') || (operator=='/'))
    {
        if (scanf("%lf %lf", &x, &y) != 2) { printf("Error: Wrong opperands or format\n"); return 1; };
    } 
    else
    {
         if (scanf("%lf", &x) != 1) { printf("Error: Wrong opperand or format\n"); return 1; };
    }

    int operationExitCode = 0;
    switch(operator)  
    {  
        case '+':  
            operationExitCode = add(x, y); 
            break;  
          
        case '-':
            operationExitCode = sub(x, y);
            break;  
              
        case '*': 
            operationExitCode = mult(x, y);
            break;            
          
        case '/':
            operationExitCode = division(x, y);
            break;

        case '!':
            operationExitCode = fuct(x);
            break;

        case 's':
            operationExitCode = sr(x);
            break;
        default: 
            printf ("Error: Unknown operator \n");               
    }  
    return operationExitCode;  
}
