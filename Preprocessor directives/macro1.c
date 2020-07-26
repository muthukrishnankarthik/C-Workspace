//macro.c
#include <stdio.h>

#define  message_for(a, b)  \
   printf(#a " and " #b ": Hello!!!\n")

int main(void) {
   message_for(P, Q);
   return 0;
}