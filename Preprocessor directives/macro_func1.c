#include<stdio.h>
#define JOIN(x,y) ((x>y)?x:y);
//#define JOIN(x,y) printf(" %d %d",x,y);
int main()
{
	int i=10,j,k;
	j=5;
	k=0;
	k=JOIN(++i,j++);
	printf("%d %d %d\n",i,j,k );
}