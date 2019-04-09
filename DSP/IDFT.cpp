#include <stdio.h>
#include<iostream>
using namespace std;
#include <math.h>
int main()
{
int k,n;
int N=8;
 float x[8]={1,1,1,1,0,0,0,0};
 float r[8],i[8];
	for(k=0;k<N;k++)
{
r[k]=0.0;
i[k]=0.0;

for(n=0;n<N;n++)
{
r[k]=r[k]+x[n]*(cos((2*3.14*n*k)/N));
i[k]=i[k]+x[n]*(sin((2*3.14*n*k)/N));
	
}	
r[k]=r[k]/N;
i[k]=i[k]/N;
cout<<i[k]<<"+j "<<i[k]<<"\n";
}
}