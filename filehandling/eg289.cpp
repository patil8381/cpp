#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string g;
fstream f("somefile.dat",ios::out | ios::in | ios::app);
f<<"Great";
f.close();

return 0;
}