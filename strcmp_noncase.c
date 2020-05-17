#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//biblioteca p/ as funções isalpha isdigit toupper tolower


int strcmp_noncase(char *string1, char* string2){
  int size1 = strlen(string1), size2 = strlen(string2), i = 0;
  char lstring1[size1], lstring2[size1];

  for (i = 0; i < size1; ++i )
    lstring1[i] = tolower(string1[i]);

  for (i = 0; i < size2; ++i )
    lstring2[i] = tolower(string2[i]);

  return strcmp(lstring1, lstring2);
}

//returns 0 if equal, 1 if different
int strcmp_noncase_speedyboy(char *string1, char* string2){
  for(int i = 0;!((string1[i]=='\0') && (string2[i]=='\0'));++i){
      if(tolower(string1[i]) != tolower(string2[i]))
        return 1;
      };
      return 0;
  };



int main()
{
  printf("Hello World!\n");
  printf("\n%d\n", strcmp_noncase_speedyboy("linux","LiN2X"));

  return 0;
}
