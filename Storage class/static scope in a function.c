/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a=0;
void fun()
{
    static int a=5;
    
    a++;
    printf("Inside fun() after a++ :%d \n",a);
    if(a==8)printf(" the value of a inside fun is 8");
}

int main()
{
  printf(" before initialization a :%d \n",a);
  //static int a=1;
   printf(" after initialization in main a :%d \n",a);
  a++;
  fun();
  printf(" After the fun() first call, a :%d \n",a);
   a++;
  fun();
  printf(" After the fun() 2nd call, a :%d \n",a);
  
  fun();

    return 0;
}
