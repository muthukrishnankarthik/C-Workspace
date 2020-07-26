#include<iostream>
using namespace std;

int main()
{
//cout<<"Hello world";

int n,i,x,a[30],pos=1,l=1,h;
cout<<"Enter the length of the array";cin>>n;
cout<<"Enter the elements in ascending order";

for(i=1;i<=n;i++)
{
cin>>a[i];
}

cout<<"\n Enter the element to be found \n";
cin>>x;


h=n;

do{
pos=l+(((x-a[l])*(h-l))/(a[h]-a[l]));

if(a[pos]==x) break;
else if(x>a[pos]) l=pos+1;
else if(x<a[pos])h=pos-1;
if(l==h) pos=-1;
}while(l<=h);

if(pos==-1)
cout<<" the element not found";
else
cout<<"The location is "<<pos<<endl;
 

return 0;

}
