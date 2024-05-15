#include<iostream>
#include<fstream>
using namespace std;
int main()
{
fstream f("somefile.dat",ios::app);	//output file stream
f<<"Cool";
f.close();

return 0;
}