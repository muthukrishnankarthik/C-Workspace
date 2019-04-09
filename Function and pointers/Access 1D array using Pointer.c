// To demonstrate pointer  and arrays

#include<stdio.h>
int main()
{

int *ptr,a[25],n;
printf("Enter the no of elements\n");
scanf("%d",&n);

for(int i=0;i<n;i++)
scanf("%d",&a[i]);

//reference to pointer
ptr=a;
printf("\n\n Accessing using pointers\n");
for(int i=0; i<n;i++)
printf("%d",*(ptr+i));

return 0;
}

