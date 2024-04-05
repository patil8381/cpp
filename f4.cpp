#include<map>
#include<utility>
#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
Bulb(int w)	//only friend can create object
		//and no one can create object of class Bulb
{
this->w=w;
cout<<"Object created with wattage "<<(this->w)<<endl;
}
public:
int getWattage()
{
return this->w;
}
~Bulb()
{
cout<<"Object with wattage "<<this->w<<" is destroyed"<<endl;
}
void operator delete(void *ptr)
{
//do nothing
}
friend class BulbFactory;
};

class BulbFactory
{
map<int,Bulb *> bulbs;
public:
Bulb * getBulb(int w)
{
if(w<0 || w>240) return NULL;
map<int,Bulb *>::iterator i;
i=bulbs.find(w);
Bulb *b;
if(i==bulbs.end()) 
{
b=new Bulb(w);
bulbs.insert(pair<int,Bulb *>(w,b));
}
else 
{
b=i->second;
}
return b;
}
~BulbFactory()
{
cout<<"BulbFactory destructor got invoked"<<endl;
map<int,Bulb *>::iterator i;
for(i=bulbs.begin();i!=bulbs.end();++i)
{
delete (i->second);
}
}
};
int main()
{
Bulb *k1;
BulbFactory factory;
k1=factory.getBulb(60);
if(k1) cout<<k1->getWattage()<<endl;
Bulb *k2=factory.getBulb(60);
if(k2) cout<<k2->getWattage()<<endl;

Bulb *k3=factory.getBulb(100);
if(k3) cout<<k3->getWattage()<<endl;

return 0;
}