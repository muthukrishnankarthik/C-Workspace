#include<iostream>
#include<stdio.h>
#include<string>
#include<map>
#include<cmath>
using namespace std;

int main()
{		string test="01";
		map<char,int> mymap;
		

		mymap['1']=1;
		mymap['2']=2;
		mymap['3']=3;
		mymap['4']=4;
		mymap['5']=5;
		mymap['6']=6;
		mymap['7']=7;
		mymap['8']=8;
		mymap['9']=9;
  		mymap['a']=10;
  		mymap['b']=11;
  		mymap['c']=12;
  		mymap['d']=13;
  		mymap['e']=14;
  		mymap['f']=15;

  		
  	
  		uint8_t val=mymap.find(test[0])->second*16+mymap.find(test[1])->second;
  			cout<<endl<<val;
}