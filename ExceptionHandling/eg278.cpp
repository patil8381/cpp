#include<iostream>
using namespace std;
class aaa
{
public:
virtual void sam(int) throw()=0;
};
class bbb:public aaa
{
public:
void sam(int e) throw()
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