#include<iostream>
using namespace std;

int i,j,k,m,n;
float x[30],y[30],s;

int main()
{

cout<<"enter the length of two sequences"; cin>>m>>n;
int l=m+n-1;
cout<<"Enter the first sequence\n";
for(i=1;i<=m;i++)
	cin>>x[i];

cout<<"Enter the second sequence\n";
for(i=1;i<=n;i++)
	cin>>y[i];
cout<<endl;
for(i=1;i<=n;i++)
{ 
	s=0;
	for(j=1,k=i;k<=1,j<=m;j++,k--)
		s+=x[j]*y[k];

	cout<<s<<" ";
	}

for(i=n-m+2;i<=n;i++)
	{s=0;
		for(j=m,k=i;k<=n;j--,k++)
			s+=x[j]*y[k];
		cout<<s<<" ";
		}

}