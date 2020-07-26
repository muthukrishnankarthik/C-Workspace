#include <stdio.h>

int main ()
{
  char sentence []="Rudolph is ff years old";
  char str [20];
  unsigned int i;

  sscanf (sentence,"%s %*s %x",str,&i);
  printf ("%s -> %d\n",str,i);
  
  return 0;
}