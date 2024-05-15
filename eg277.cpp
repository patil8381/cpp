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
void sam(int e)			//this function will show error as the PVF has throw keyword
{
if(e==5) throw e;
cout<<"Some processing"<<endl;
}
};
int main()
{
bbb b;
b.sam(60);
b.sam(5);
return 0;
}