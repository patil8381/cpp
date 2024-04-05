#include<utility>
#include<map>
#include<iostream>
using namespace std;

int main()
{
map<int,int> m;
m.insert(pair<int,int>(101,4030));
m.insert(pair<int,int>(102,130));
m.insert(pair<int,int>(103,6000));
m.insert(pair<int,int>(104,5040));
m.erase(103);
cout<<"erased 103"<<endl;
map<int,int>::iterator i;

i=m.find(102);		//i=m.find(192);
if(i==m.end()) cout<<"Item code 102 not found"<<endl;
else cout<<"price of item with code 102 is "<<i->second<<endl;
for(i=m.begin();i!=m.end();++i)
{
cout<<(*i).first<<","<<i->second<<endl;
}
return 0;
}