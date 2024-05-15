#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream f("somefile.dat");	//Output file stream 
f<<"Great";
f.close();

return 0;
}