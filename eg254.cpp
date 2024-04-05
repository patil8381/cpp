#include<utility>
#include<map>
#include<iostream>
using namespace std;
int main()
{
map<int,int> m;
//key	value
m[101]=4030;
m[102]=30;
m[103]=6000;
m[104]=33;
map<int,int>::iterator i;
i=m.begin();
while(i!=m.end())
{
cout<<(*i).first<<","<<i->second<<endl;
++i;
}

return 0;
}