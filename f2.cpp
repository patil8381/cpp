#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
Bulb(int w)	//no one can inherit 
		//and no one can create object of class Bulb
{
this->w=w;
}
//friend class bbb;
};
class bbb:public Bulb
{
public:
bbb():Bulb(60)
{
}
};
int main()
{
return 0;
}