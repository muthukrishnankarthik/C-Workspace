// To pass array to function as pointer

#include<stdio.h>
void point(int *ptr,int n)
{
int sum=0;
printf("\n\n Accessing array elements through pointer\n\n");

for(int x=0;x<n;x++)
{	for(int y=0;y<n;y++)
	{
	printf(" %d\t",*(ptr+(x*(n)+y)));
	sum+=*(ptr+(x*(n)+y));
	}
	printf("\n");
}
 printf("\n sum of the elements is %d",sum);
}

int  main()
{
int  n,i,j,a[2][2];

printf("Enter the order of the array\n");
scanf("%d",&n);
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
point(a,n);

return 0;
}



