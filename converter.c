#include <stdio.h> 
#include <stdlib.h>
#include "converter.h"


int main()  
{  
    char operation;
    printf("Choose an operation (l - lowercase, u - uppercase): ");
    operation = getchar();     

    switch(operation)  
    {  
        case 'l':  
            lower();
            break;  
          
        case 'u':
            upper();
            break;  
              
        default: 
            printf("Error: Unkniwn operation\n");               
    }  
    return 0;  
}
