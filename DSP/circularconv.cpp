#include<iostream>
using namespace std;

int i,j,k,m,n,l;
float x[30],y[30],s,temp[30];

int main()
{

cout<<"enter the length of two sequences"; cin>>m>>n;
int max;
max=m>n?m:n;
cout<<"Enter the first sequence\n";
for(i=1;i<=m;i++)
	cin>>x[i];


cout<<"Enter the second sequence\n";
for(i=1;i<=n;i++)
	cin>>y[i];

if(m<n) //zero padding
{
	for(i=m+1;i<=n;i++)
		x[i]=0;
}
else if(n<m)
for(i=n+1;i<=m;i++)
		y[i]=0;


for(l=1;l<=max;l++)
{	s=0;
	for(j=l,i=1;i<=max;j--,i++) // 
		{if(j==0) j=max;
			s+=x[i]*y[j];
				}
				cout<<s<<" ";
}
}
