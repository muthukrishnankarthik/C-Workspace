#include<iostream>
using namespace std;
int main()
{
	int *ptr=new int[40];
	cout<<"Enter values";
	
	for(int i=0;i<5;i++)
		cin>>ptr[i];
	cout<<"\nValues are \n";
	for( int j=0;j<5;j++)
		cout<<ptr[j];
}