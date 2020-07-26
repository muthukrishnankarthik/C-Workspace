#include<iostream>
using namespace std;
class Matm
{
	int *Ident;
	int length;
	
public:
	
	void InitSet();
	int* Get_String(int&);
	
};

void Matm::InitSet()
{
	Ident=new int[20];
	for (int i=0;i<10;i++)
		Ident[i]=i;
}
int* Matm::Get_String(int &l)
{ InitSet();
	//for(int i=0;i<10;i++)
		//arr[i]=Ident[i];
	length=10;
	l=length;
	return Ident;
}
class TestUtil
{
	int* IdStr;
	int len;
	Matm Matm_Inst;
public:
	void SetArray();
	void PrintArray();
};

void TestUtil::SetArray()
{ 
  IdStr=Matm_Inst.Get_String(len);

}

void TestUtil::PrintArray()
{	cout<<"length is "<<len<<endl;
	for(int i=0;i<10;i++)
		cout<<IdStr[i]<<" ";
}




int main()
{
	TestUtil Instance;
	Instance.SetArray();
	Instance.PrintArray();
	return 0;
}