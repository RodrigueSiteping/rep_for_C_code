#include <stdio.h>
 
struct complex
{
   int r, i;
};
 
int main()
{
   struct complex a, b, somme;

   printf(" Entrez la valeur a et b du premier nombre complexe(a + ib): ");
   scanf("%d%d", &a.r, &a.i);
   printf(" Entrez la valeur c et d du deuxième nombre complexe(c + id): ");
   scanf("%d%d", &b.r, &b.i);
 
   somme.r = a.r + b.r;
   somme.i = a.i + b.i;
 
   printf(" La somme des nombres complexes: %d + %di\n", somme.r, somme.i);
 
   return 0;
}