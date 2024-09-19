#include <stdio.h>
#include <string.h> 


#include "converter.h"
  

int lower()  
{
   char s[255];
   int i;
   printf("Enter a string : ");
   scanf("%19s%*[^\n]\n", s);
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
   }
   printf("String in Lower Case = %s\n", s);
   return 0;
}
