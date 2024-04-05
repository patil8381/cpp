#include<vector>
#include<iostream>
using namespace std;
int main()
{
vector<int> g;
g.push_back(10);
g.push_back(20);
g.push_back(30);
g.push_back(40);
cout<<g.front()<<endl;
cout<<g.back()<<endl;
cout<<"***************"<<endl;
for(int e=0;e<g.size();e++) cout<<g[e]<<endl;
cout<<"***************"<<endl;
for(vector<int>::iterator i=g.begin();i!=g.end();i++) cout<<*i<<endl;
cout<<"***************"<<endl;
for(vector<int>::reverse_iterator i=g.rbegin();i!=g.rend();i++) cout<<*i<<endl;

return 0;
}