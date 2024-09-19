#include <stdio.h>
#include <string.h> 


#include "converter.h"
  

int upper()  
{
   char s[255];
   int i;
   printf("Enter a string : ");
   scanf("%19s%*[^\n]\n", s);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
   printf("String in Upper Case = %s \n", s);
   return 0;
}
