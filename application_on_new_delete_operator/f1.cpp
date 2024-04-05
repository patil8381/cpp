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

};

int main()
{
Bulb b(60);
return 0;
}