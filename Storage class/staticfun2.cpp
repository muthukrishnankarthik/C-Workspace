#include<iostream> 
using namespace std; 
  
class Test 
{ 
private: 
    static int count; 
public: 
    Test& fun();  
}; 
  
int Test::count = 0; 
  
Test& Test::fun() 
{ 
    Test::count++; 
    cout << Test::count << " "; 
    return *this; 
} 
  
int main() 
{ 
    Test t; 
    t.fun().fun().fun().fun(); //note that fun() returns the same object by reference.
    return 0; 
} 