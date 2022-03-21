#include <stdio.h>
 
void inverser(char *p, int start, int end)
{
   char ch;
   if (start >= end)
      return;
 
   ch = *(p+start);
   *(p+start) = *(p+end);
   *(p+end) = ch;

   inverser(p, ++start, --end);
}
 
int main()
{
   char str[100];
   printf(" Entrez une chaîne de caractère :  ");
   gets(str);

   inverser(str, 0, strlen(str)-1);

   printf(" Chaîne de caractère après inversion = %s", str);
   
   return 0;
}