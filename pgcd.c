#include <stdio.h>

int main()
{
    int nbr1, nbr2, pgcd, i;
  
    printf("Entrez deux entiers: ");
    scanf("%d %d", &nbr1, &nbr2);
  
    for(i=1; i <= nbr1 && i <= nbr2; ++i)
    {
        if(nbr1%i==0 && nbr2%i==0)
            pgcd = i;
    }
  
    printf("PGCD de %d et %d = %d", nbr1, nbr2, pgcd);
    return 0;
}

/* RECURSIF
long pgcd (long a, long b) {
  long r;
  
  r = a % b;
  if (r == 0)
    return b;
  else
    return pgcd (b, r);
}
*/