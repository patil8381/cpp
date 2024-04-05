#include<iostream>
using namespace std;
class aaa
{
public:
void operator()()
{
cout<<"Great feature"<<endl;
}
int operator()(int p,int q)
{
cout<<"Cool feature"<<endl;
return p+q;
}
};
int main()
{
aaa a;
a();
cout<<a(10,20);

return 0;
}