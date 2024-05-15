#include<iostream>
#include<fstream>
using namespace std;
class Bulb
{
public:
int w;
string brand;
};
int main()
{
Bulb b1,b2;
cout<<"size of bulb class : "<<sizeof(Bulb)<<endl;
cout<<"size of bulb b1 : "<<sizeof(b1)<<endl;
cout<<"size of bulb b2 : "<<sizeof(b2)<<endl;
cout<<"size of bulb b2.w : "<<sizeof(b2.w)<<endl;
cout<<"size of bulb b2.brand : "<<sizeof(b2.brand)<<endl;

b1.w=20;
b1.brand="Philips is the best brand ever. ABCDEFGHIJKLMNOPQRSTUBWXYZ";
b2.w=40;
b2.brand="Finolex";

fstream f("somefile.data",ios::out | ios::in | ios::app | ios::binary);
f.write((char *)&b1,sizeof(Bulb));
cout<<"ftell : "<<f.tellp()<<endl;

f.read((char *)&b1,sizeof(Bulb));
cout<<b1.w<<","<<b1.brand<<endl;
f.read((char *)&b2,sizeof(Bulb));
cout<<b2.w<<","<<b2.brand<<endl;

return 0;
}