#include<iostream>
using namespace std;
int big=0;
class A
{
	static int a;
	
	public:
		int ret(){
			cout<<"big:"<<big<<endl;
			return a;}
		static int inc()
		{
			a++;
		}
		static int inc(int b)
		{
			a=b;
		}

};

int A::a=1;

static void readStatic(A i)
{
	cout<<"a:"<<i.ret()<<endl;
	i.inc(5);
	cout<<"a:"<<i.ret()<<endl;
	cout<<"big"<<big;
}

int main()
{
	A inst;
	readStatic(inst);
}