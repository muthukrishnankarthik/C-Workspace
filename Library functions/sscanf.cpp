#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	uint8_t t=0x88;
	char str[4]="ff";
	//sscanf(str,"%x",t);
	//printf("%x\n",t );

	cout<<hex<<(int)t;
	//cout<<t;
}