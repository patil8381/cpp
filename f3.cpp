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
public:
int getWattage()
{
return this->w;
}
~Bulb()
{
//do nothing 
}
friend class BulbFactory;
};

class BulbFactory
{
public:
Bulb * getBulb(int w)
{
if(w<0 || w>240) return NULL;
Bulb *b;
b=new Bulb(w);
return b;
}
};
int main()
{
Bulb *k;
BulbFactory factory;
k=factory.getBulb(60);
if(k) cout<<k->getWattage()<<endl;
//delete k;

return 0;
}