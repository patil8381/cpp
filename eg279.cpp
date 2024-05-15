#include<iostream>
using namespace std;
class aaa
{
public:
virtual void sam(int) throw()=0;		//throw(int) 	c++17 does not allows 
								//dynamic exception expression
};
class bbb:public aaa
{
public:
void sam(int e) throw()			//throw(int) 	c++17 does not allows 
								//dynamic exception expression
{
if(e==5) throw e;
cout<<"Some processing"<<endl;
}
};
int main()
{
bbb b;
try
{
b.sam(60);
b.sam(5);
}catch(int e)
{
cout<<"Catch with int get excecuted"<<endl;
}
return 0;
}