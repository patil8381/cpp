#include<iostream>
#include<fstream>
using namespace std;
class Bulb
{
public:
int wattage;
int price;
};
int main()
{
Bulb b1,b2,b3,b4;
b1.wattage=0;
b2.wattage=10;
b3.wattage=30;
b4.wattage=50;
b1.price=10;
b2.price=20;
b3.price=50;
b4.price=100;

string g;
fstream f("Bulb.dat",ios::out | ios::in | ios::app | ios::binary);
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;
f.write((char *)&b1,sizeof(Bulb));
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;
f.write((char *)&b2,sizeof(Bulb));
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;
f.write((char *)&b3,sizeof(Bulb));
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;
f.write((char *)&b4,sizeof(Bulb));
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;

f.seekg(8,ios::beg);
cout<<"After seekg"<<endl;
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;

Bulb b;
f.read((char *)&b,sizeof(Bulb));
cout<<"wattage : "<<b.wattage<<","<<"Price : "<<b.price<<"."<<endl;
cout<<"After reading"<<endl;
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;
f.seekp(8,ios::beg);
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;
cout<<"After seekp"<<endl;
b.wattage=1000;
b.price=400;
f.write((char *)&b,sizeof(Bulb));
cout<<"After write"<<endl;
cout<<"Put pointer is at location."<<f.tellp()<<endl;
cout<<"Get pointer is at location."<<f.tellg()<<endl;
f.close();
return 0;
}