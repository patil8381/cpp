#include<iostream>
using namespace std;
void sam(int e) throw()
{
if(e==5) throw e;
if(e==7) throw "Great";
cout<<"Some Processing"<<endl;
}
void doSomething()
{
cout<<"OOPs, somting happened which was not expected"<<endl;
}
int main()
{
set_unexpected(doSomething);
try
{
sam(100);
sam(7);
sam(20);
}catch(int e)
{
cout<<"code within catch with int gets executed"<<endl;
}catch(char const *p)
{
cout<<"code within catch with char const * get executed"<<endl;
}
return 0;
}