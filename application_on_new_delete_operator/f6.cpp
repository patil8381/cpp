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
static int factoryCount;
static map<int,Bulb *> bulbs;
public:
BulbFactory()
{
factoryCount++;
cout<<"Now the number of factories in memory : "<<factoryCount<<endl;
}
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
factoryCount--;
cout<<"Now the number of factories in memory : "<<factoryCount<<endl;
cout<<"BulbFactory destructor got invoked"<<endl;
map<int,Bulb *>::iterator i;
if(factoryCount==0)
{
cout<<"Releasing all bulbs as all factories have been destroyed"<<endl;
for(i=bulbs.begin();i!=bulbs.end();++i)
{
delete (i->second);
}

}
}
};
int BulbFactory::factoryCount;
map<int,Bulb *> BulbFactory::bulbs;

void justDoIt()
{
Bulb *k1;
BulbFactory factory;
k1=factory.getBulb(60);
if(k1) cout<<k1->getWattage()<<endl;
Bulb *k2=factory.getBulb(60);
if(k2) cout<<k2->getWattage()<<endl;

Bulb *k3=factory.getBulb(100);
if(k3) cout<<k3->getWattage()<<endl;

}
int main()
{
Bulb *p;
BulbFactory f;
p=f.getBulb(60);
if(p) cout<<p->getWattage()<<endl;
cout<<p<<endl;
justDoIt();

Bulb *p2=f.getBulb(100);
if(p2) cout<<p2->getWattage()<<endl;
cout<<p2<<endl;

return 0;
}