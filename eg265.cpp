#include<iostream>
#include<map>
#include<utility>
using namespace std;
bool myComparator(int left,int right)
{
return left>right;
}

int main()
{
multimap<int,int,bool (*)(int ,int)> m(myComparator);
m.insert(pair<int,int>(101,1000));
m.insert(pair<int,int>(101,1001));
m.insert(pair<int,int>(101,1002));
m.insert(pair<int,int>(102,1003));
m.insert(pair<int,int>(102,1004));
m.insert(pair<int,int>(103,1005));
m.insert(pair<int,int>(103,1006));
m.insert(pair<int,int>(103,1007));
multimap<int,int>::iterator i;
i=m.begin();
while(i!=m.end())
{
cout<<i->first<<","<<i->second<<endl;
++i;
}


return 0;
}

