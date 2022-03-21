#include <stdio.h>

int pgcd(int nbr1, int nbr2)
{
    if (nbr2 != 0)
       return pgcd(nbr2, nbr1%nbr2);
    else 
       return nbr1;
}

int main()
{
   int nbr1, nbr2;
   
   printf("Entrez deux entiers: ");
   scanf("%d %d", &nbr1, &nbr2);
   
   printf("PGCD de %d et %d = %d", nbr1, nbr2, pgcd(nbr1,nbr2));
   return 0;
}