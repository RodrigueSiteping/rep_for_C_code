#include <stdio.h>

int main() {
   int tab[7] = {9, 1, 5, 2, 3, 11, 6};
   int s = 0, i;
   float moy = 0;
   
   for(i = 0; i < 7; i++) {
      s = s + tab[i];
   }
   
   moy = (float)s / i;
   printf("La moyenne des valeurs du tableau est %.2f", moy);   
   
   return 0;
}