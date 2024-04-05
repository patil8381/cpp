#include<iostream>
#include<map>
#include<utility>
using namespace std;
int main()
{
multimap<int,int> m;
m.insert(pair<int,int>(101,1000));
m.insert(pair<int,int>(101,1001));
m.insert(pair<int,int>(101,1002));
m.insert(pair<int,int>(102,1003));
m.insert(pair<int,int>(102,1004));
m.insert(pair<int,int>(103,1005));
m.insert(pair<int,int>(103,1006));
m.insert(pair<int,int>(103,1007));

pair<multimap<int,int>::iterator,multimap<int,int>::iterator> rr;
rr=m.equal_range(101);

cout<<(rr.first==rr.second)<<endl;
cout<<(rr.first==m.end())<<endl;

multimap<int,int>::iterator i;
i=rr.first;
while(i!=rr.second)
{
cout<<i->first<<","<<i->second<<endl;
++i;
}

return 0;

}