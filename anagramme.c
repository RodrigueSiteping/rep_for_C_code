#include <stdio.h>
 
int isAnagram(char str1[], char str2[])
{
  int tab1[26] = {0}, tab2[26] = {0}, i=0;
 
  while (str1[i] != '\0')
  {
    tab1[str1[i]-'a']++;
    i++;
  }
 
  i = 0;
 
  while (str2[i] != '\0')
  {
    tab2[str2[i]-'a']++;
    i++;
  }
 
  for (i = 0; i < 26; i++)
  {
    if (tab1[i] != tab2[i])
      return 0;
  }
 
  return 1;
}
 
int main()
{
  char str1[100], str2[100];
 
  printf("Entrez la première chaîne\n");
  gets(str1);
 
  printf("Entrez la deuxième chaîne\n");
  gets(str2);
 
  if (isAnagram(str1, str2) == 1)
    printf("Les chaînes sont des anagrammes.\n");
  else
    printf("Les chaînes ne sont pas des anagrammes.\n");
 
  return 0;
}