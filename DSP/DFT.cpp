/*#include<iostream>
#include<math.h>
using namespace std;

int i,j,k,m,n,l,w,x[30];
float y[30],sr,si,temp[30];

int main()
{

cout<<"Enter the 8 point sequence \n";
for(i=0;i<8;i++)
cin>>x[i];


cout<<"DFT sequence is \n\n";
for(k=0;k<8;k++)
{
	sr=0;si=0;
	for(n=0;n<8;n++)
	{
		w=3.141*n*k/4;
		sr+=(x[n]*cos(w));
		si+=((sin(w))*x[n]);
	}
	si=-si;
	cout<<sr<<"+j"<<si<<" \n";
}

}
*/
#include<iostream>
using namespace std;
#include <stdio.h>
#include <math.h>
//#define pi 3.14;
int main()
{
int k,n;
int N=8;
 double x[8]={1,1,1,1,1,1,0,0};
 double r[8],i[8];
	for(k=0;k<N;k++)
{
r[k]=0.0;
i[k]=0.0;

for(n=0;n<N;n++)
{
	
r[k]=r[k]+x[n]*(cos((2*3.14*n*k)/N));
i[k]=i[k]+x[n]*(sin((2*3.14*n*k)/N));
	
}
i[k]=-i[k];
cout<<r[k]<<"+j"<<i[k]<<" \n";
}
}