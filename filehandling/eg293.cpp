#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;
class Bulb
{
public :
int wattage;
int price;
string  brandName;
};
class BulbManager
{
private:
class _Bulb
{
public:
int wattage;
int price;
char brandName[51];
};
public:
void add(Bulb &b)
{
_Bulb bulb;
bulb.wattage=b.wattage;
bulb.price=b.price;
strcpy(bulb.brandName,b.brandName.c_str());
fstream f("Bulb.dat",ios::out | ios::in | ios::app);
f.write((char *)&bulb,sizeof(_Bulb));
f.close();
cout<<"Bulb Added"<<endl;
}
void displayListOfBulb()
{
Bulb b;
_Bulb bulb;
ifstream f("Bulb.dat");
if(f.fail())
{
cout<<"No Bulbs added"<<endl;
return ;
}
while(1)
{
f.read((char *)&bulb,sizeof(_Bulb));
if(f.fail()) break;
b.wattage=bulb.wattage;
b.price=bulb.price;
b.brandName=string(bulb.brandName);
cout<<"Wattage : "<<b.wattage<<" ,Price : "<<b.price<<" ,BrandName : "<<b.brandName<<endl;
}
f.close();
}
};
int main()
{
Bulb b;
BulbManager bm;
int ch;
while(1)
{
cout<<"1. Add Bulb"<<endl;
cout<<"2. Display list of bulbs"<<endl;
cout<<"3. Exit"<<endl;
cout<<"Enter your choice : ";
cin>>ch;
if(ch==1) 
{
cout<<"Enter Wattage : ";
cin>>b.wattage;
cout<<"Enter Price : ";
cin>>b.price;
cout<<"Enter Brand Name : ";
cin>>b.brandName;
bm.add(b);

cout<<"Bulb Added "<<endl;
}
if(ch==2) 
{
bm.displayListOfBulb();
}
if(ch==3) break;
}

return 0;
}
