//	stack	queue 	priority_queue	array	vector

#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack<int> s;
s.push(10);
s.push(40);
s.push(20);
s.push(30);

cout<<s.top()<<endl;
s.pop();
cout<<"*************"<<endl;
cout<<s.size()<<endl;
cout<<s.empty()<<endl;
cout<<"*************"<<endl;
while(!s.empty())
{
cout<<s.top()<<endl;
s.pop();
}
cout<<s.size()<<endl;
cout<<s.empty()<<endl;
return 0;
}

