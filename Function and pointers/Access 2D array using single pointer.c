// To access 2 D Array using pointers

#include<stdio.h>
int main()
{
int n,i,a[2][2],*ptr;
printf("\n Enter the order of elements\n");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	scanf("%d",&a[i][j]);
}

//passing to pointer

ptr=a;
printf("\n\n Entered array is\n\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
printf(" %d",a[i][j]);

printf("\n");
	}

// address of the array stored

printf("\n\n Address of array elements is\n\n");
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
printf(" %u \t",&a[i][j]);

printf("\n");
        }



// Accessing through pointer
int sum=0;
printf("\n\n Accessing array elements through pointer\n\n");
for(int i=0;i<n;i++)
{for(int j=0;j<n;j++)
{printf(" %d\t",*(ptr+(i*(n)+j)));
sum+=*(ptr+(i*(n)+j));	}
printf("\n");}
return 0;
}

