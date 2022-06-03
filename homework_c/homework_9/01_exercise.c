#include <stdio.h>
#include <string.h>

int main()
{
  char str[] = "hi";
  int counter = 0;

  while (str[counter] != '\0')
  {
   counter++;
  }
  printf("%d", counter);

  return 0;
} 
