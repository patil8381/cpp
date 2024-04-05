#include<utility>
#include<map>
#include<iostream>
using namespace std;
int main()
{
map<int,int> m;
m[101]=4030;
m[102]=30;
m[103]=6000;
m[104]=33;
map<int,int>::iterator i;

i=m.find(102);		//i=m.find(192);
if(i==m.end()) cout<<"Item code 102 not found"<<endl;
else cout<<"price of item with code 102 is "<<i->second<<endl;

return 0;
}