/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// To evaluate the sizeof operator and expression inside
int main()
{   int a=16,b=2,c=12;
    printf("%d bytes",sizeof(a/=b+c)); // sizeof returns long unsigned int , therefore warning occurs 
    //prints size of (int)
    // no calculation can be performed inside sizeof operator
    printf("\n a : %d",a);// result shows that assignment of a was not changed.

    return 0;
}
