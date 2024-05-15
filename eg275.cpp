#include<iostream>
using namespace std;
void sam(int e) throw()
{
if(e==5) throw e;
if(e==7) throw e;
cout<<"Some Processing"<<endl;
}
void doSomething()
{
cout<<"OOPs, somting happened which was not expected"<<endl;
}
int main()
{
set_unexpected(doSomething);
sam(100);
//sam(5);
sam(20);

return 0;
}