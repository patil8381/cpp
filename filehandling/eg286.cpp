#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string g;
ifstream f("somefile.dat");	//Input file stream
f>>g;
f.close();

cout<<g<<endl;

return 0;
}