#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string g;
fstream f("somefile.dat",ios::out | ios::in);
f<<"Great";
//f>>g;
f.close();
cout<<g<<endl;

return 0;
}