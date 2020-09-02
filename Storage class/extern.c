
#include<stdio.h>
int x=21;

int main()
{
extern int y;
    printf("x =%d y= %d\n",x,y);
    
}
int y=21;

/*
Output: 
x=21 y=21
*/