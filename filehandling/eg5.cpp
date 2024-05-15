#include<iostream>
#include<fstream>
using namespace std;
class Bulb
{
public:
int p;
int w;
};
int main()
{
Bulb b;
b.p=100;
b.w=10;
fstream dataFile("file.dd",ios::in | ios::out | ios::binary);
if(dataFile.fail())
{
fstream dFile("file.dd",ios::app | ios::in | ios::out | ios::binary);
dFile.write((char *)&b,sizeof(Bulb));
dFile.close();
}

dataFile.seekg(0,ios::beg);
dataFile.read((char *)&b,sizeof(Bulb));
cout<<"p : "<<b.p<<", w : "<<b.w<<endl;

b.p=220;
b.w=20;
dataFile.seekp(0,ios::beg);
dataFile.write((char *)&b,sizeof(Bulb));

dataFile.seekg(0,ios::beg);
dataFile.read((char *)&b,sizeof(Bulb));
cout<<"2) p : "<<b.p<<", w : "<<b.w<<endl;

return 0;
}