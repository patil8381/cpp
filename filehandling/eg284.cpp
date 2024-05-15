#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream f("somefile.dat",ios::out);	//output file stream
f<<"Great";
f.close();

return 0;
}