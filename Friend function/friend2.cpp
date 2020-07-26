#include<iostream>
using namespace std;
class Matm;
class TestUtil
{
	int* IdStr;
	Matm Matm_Inst
public:
	void SetArray();
	void PrintArray(Matm* Inst);
};
class Matm
{
	int *Ident;
public:
	
	void InitSet();
	int* Get_String();
	friend void TestUtil::PrintArray(Matm* Inst);
	
};

void Matm::InitSet()
{
	Ident=new int[20];
	for (int i=0;i<10;i++)
		Ident[i]=i;
}
int* Matm::Get_String()
{ InitSet();
	//for(int i=0;i<10;i++)
		//arr[i]=Ident[i];
	return Ident;
}


void TestUtil::SetArray()
{ 
  IdStr=Matm_Inst.Get_String();
  

}

void TestUtil::PrintArray(Matm* Inst)
{
	for(int i=0;i<10;i++)
		cout<<Inst->Ident[i]<<" ";
}




int main()
{	Matm M;
	M.InitSet();
	TestUtil Instance;
	//Instance.SetArray();
	Instance.PrintArray(&M);
	return 0;
}