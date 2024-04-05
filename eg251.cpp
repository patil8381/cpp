#include<queue>
#include<iostream>
using namespace std;
int main()
{
priority_queue<int> g;
g.push(10);
g.push(3);
g.push(100);
g.push(5);
g.push(50);
cout<<g.top()<<endl;
cout<<g.size()<<endl;
cout<<"***************"<<endl;
while(!g.empty())
{
cout<<g.top()<<endl;
g.pop();
}


return 0;
}