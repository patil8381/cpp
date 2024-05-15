#include<iostream>
#include<fstream>
using namespace std;
class Bulb
{
public:
int wattage;
int price;
string brand;
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
b1.brand="Phlips";
b1.brand="Bajaj";
b1.brand="Usha";
b1.brand="ABCDEFGHIJKLMNNOPQRSTUVWXYZ";

string g;
fstream f("Bulb.dat",ios::out | ios::in | ios::app | ios::binary);
cout<<"Put pointer is at location "<<f.tellp()<<endl;
f.write((char *)&b1,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp()<<endl;
f.write((char *)&b2,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp()<<endl;
f.write((char *)&b3,sizeof(Bulb));
cout<<"Put pointer is at location "<<f.tellp()<<endl;
f.write((char *)&b4,sizeof(Bulb));

f.seekg(0,ios::beg);
while(1)
{
f.read((char *)&b1,sizeof(Bulb));
if(f.fail()) break;
cout<<"wattage : "<<b1.wattage<<" ,Price : "<<b1.price<<" ,brand : "<<b1.brand<<endl;
}

f.close();
return 0;
}