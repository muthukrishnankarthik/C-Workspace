#include<stdio.h> 
#include<iostream>
using namespace std;
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512; 
  cout<<"original:"<<x[0]<<endl; 
  //x[0] = 1; 
  //cout<<"after x[0]=1 :"<<a<<endl; 
  x[1] = 2; 

  cout<<"After x[1]=2 "<<a<<endl;   
   return 0; 
}
