#include <stdio.h>

int isVowel(char c)
{
    if (c >= 'A' && c <= 'Z')
       c = c + 32; 
 
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
       return 1;
 
    return 0;
}

int main()
{
    char c;
    printf("Entrer un caractère: \n");
    scanf(" %c", &c);
    
    if(isVowel(c))  {
    printf("\n %c est une voyelle.", c);
  }
    else {
      printf("\n %c est une consonne.", c);
  }
    return 0;
}