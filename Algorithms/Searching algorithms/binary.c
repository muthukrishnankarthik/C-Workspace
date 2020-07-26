#include<stdio.h>
int bsearch(int arr[40],int f,int l,int x);

int main()
{ int i,n,a[30],out,x;
printf("Enter the number of elements in the array\n");
scanf("%d",&n);
printf("\n Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("Enter the element to be searched \n");
scanf("%d",&x);

out=bsearch(a,0,n,x);
if(out==-1)printf("Element is not found!!");
else printf("Element was found in the index %d \n\n",out+1);

return 0;
}

int bsearch(int arr[40],int f,int l,int x)
{
int mid;
if(f<l)
{
	mid=(f+l)/2;
if(arr[mid]==x)
	return mid;
else if(x>arr[mid])
	{
		f=mid+1;
	bsearch(arr,f,l,x);
	}
else if(x< arr[mid])
	{
	l=mid-1;
	bsearch(arr,f,l,x);
	}

}

else if(f==l||f+1==l)
{ printf("\n\n into last else startement\n\n");
if(arr[f]==x)
return f;
else if(arr[l]==x)
return l;

else return -1;
}
//return -1;
}
