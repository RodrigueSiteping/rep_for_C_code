#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int main() {
   char s[100];
   int i;
   printf("\nEnter a string : ");
   gets(s);
// to check that if characters are in lower case then, 
// convert them in upper case by subtracting 32 from their ASCII value.
   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] - 32;
      }
   }
   printf("\nString in Upper Case = %s \n\n", s);
   return 0;
}

/* 
#include <stdio.h>
#include <string.h>

int main() {
   char s[100];
   int i;

   printf("\nEnter a string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++) {
      if(s[i] >= 'A' && s[i] <= 'Z') {
         s[i] = s[i] + 32;
      }
   }

   printf("\nString in Lower Case = %s", s);
   return 0;
}
*////