#include<iostream>
using namespace std;
class aaa
{
int x,y;
char m;
public:
void * operator new(size_t sz)
{
cout<<"new got called called with sz "<<sz<<endl;
return (void *)224;
}
void operator delete(void *p)
{
cout<<"delete got called"<<endl;
cout<<(unsigned long long int)p;
}
};
int main()
{
aaa *a;
a=new aaa;
cout<<"great "<<(unsigned long long int)a<<endl;
delete a;
return 0;
}