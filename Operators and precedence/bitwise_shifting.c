#include <stdio.h>

int main()
{
    int i1 = ~0;
    int i2 = i1 >> 1;
    unsigned u1 = ~0;
    unsigned u2 = u1 >> 1;
    printf("int         : %d -> %d\n", i1, i2);
    printf("unsigned int: %d -> %d\n", u1, u2);
}