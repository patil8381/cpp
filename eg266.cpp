#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"sam got called "<<endl;
}
void tom()
{
cout<<"tom got called "<<endl;
}
aaa * operator->()
{
return this;
}
};
int main()
{
aaa a;
a.sam();
a->tom();

return 0;
}