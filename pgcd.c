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
  
    printf("PGCD(%d,%d) = %d", nbr1, nbr2, pgcd);
    return 0;
}

/* pgcd_RECURSIF_1
long pgcd (long a, long b) {
  long r;
  
  r = a % b;
  if (r == 0)
    return b;
  else
    return pgcd (b, r);
}
*/

/* pgcd_RECursif_2
long pgcd (long a, long b, long *u, long *v) {
  long q, r, d, s, t;
  
  q = a / b;
  r = a % b;
  if (r == 0) {
    *u = 0;
    *v = 1;
    return b;
  }
  d = pgcd (b, r, &s, &t);
  *u = t;
  *v = s - q * t;
  return d;
}
*/
