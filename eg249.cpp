#include<iostream>
#include<array>
using namespace std;
int main()
{
array<int,10> g;
g[0]=10;
g[1]=20;
g[2]=30;
cout<<g.front()<<endl;
cout<<g.back()<<endl;
cout<<"*************"<<endl;

int e;
for(e=0;e<g.size();e++) cout<<g[e]<<endl;
cout<<"*************"<<endl;
for(array<int,10>::iterator b=g.begin();b!=g.end();b++) cout<<*b<<endl;
cout<<"*************"<<endl;
for(array<int,10>::reverse_iterator b=g.rbegin();b!=g.rend();b++) cout<<*b<<endl;
cout<<"*************"<<endl;

g.fill(0);
for(array<int,10>::iterator b=g.begin();b!=g.end();b++) cout<<*b<<endl;
cout<<"*************"<<endl;
g[0]=10;
g[1]=200;
g[2]=3000;
for(array<int,10>::iterator b=g.begin();b!=g.end();b++) cout<<*b<<endl;

return 0;
}