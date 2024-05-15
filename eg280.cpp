#include<iostream>
using namespace std;
class aaa
{
int x;
public:
void sam()
{
x=10;
}
void tom() const			//here this const will not let the function to change
					//the value of its properties.
{
cout<<"x is : "<<x<<endl;
x=20;
}
};
int main()
{
aaa a;
a.sam();
a.tom();
return 0;
}