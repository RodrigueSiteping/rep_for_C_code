#include <stdio.h>
 
int main()
{
   int nbr, tmp, nbrInverser = 0;
 
   printf("Entrez un nombre pour vérifier s'il s'agit d'un palindrome ou non\n");
   scanf("%d", &nbr);
 
   tmp = nbr;
 
   while (tmp != 0)
   {
      nbrInverser = nbrInverser * 10;
      nbrInverser = nbrInverser + tmp%10;
      tmp = tmp/10;
   }
 
   if (nbr == nbrInverser)
      printf("%d est un nombre palindrome.\n", nbr);
   else
      printf("%d n'est pas un nombre palindrome.\n", nbr);
 
   return 0;
}