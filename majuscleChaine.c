#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int i;
   printf("\n Entrez la chaîne à convertir en majuscule: ");
   gets(str);
   for (i = 0; str[i]!='\0'; i++) {
     /* si les caractères sont en minuscules, convertissez-les 
        en majuscules en soustrayant 32 de leur valeur ASCII. */
      if(str[i] >= 'a' && str[i] <= 'z') {
         str[i] = str[i] -32;
      }
   }
   printf("\n La chaîne en majuscule = %s", str);
   return 0;
}