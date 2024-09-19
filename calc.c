#include <stdio.h>
#include <stdlib.h>
#include "calc.h"


int add(double x, double y)  
{  
    printf("%lf + %lf = %lf\n", x, y, x + y); 
    return 0;  
} 

int sub(double x, double y)  
{  
    printf("%lf - %lf = %lf\n", x, y, x - y); 
    return 0; 
}  

int mult(double x, double y)  
{  
    printf("%lf * %lf = %lf\n", x, y, x * y);   
    return 0; 
}  

int division(double x, double y)  
{
    if (y == 0) { printf("Error: Zero division\n");  return 1; }
    printf("%lf / %lf = %lf\n", x, y, x / y); 
    return 0; 
}

int fuct(double x)
{
    long result = 1, i;

    for (i = 2; i <= x; ++i) {
        result *= i;
    }
    printf("%lf! = %ld\n", x, result); 
    return 0;
}

int sr(double x)  
{
    if (x < 0) { printf("Error: sqrt from negative number\n");  return 1; }
    printf("sqrt(%lf) = %lf\n", x, sqrt(x));
    return 0; 
}
