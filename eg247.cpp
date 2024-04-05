#include<iostream>
#include<list>
using namespace std;
int main()
{
list<int> l1;
l1.push_back(10);
l1.push_back(50);
l1.push_back(20);
l1.push_back(40);
l1.push_back(30);
l1.push_front(2000);

l1.sort();
cout<<"Element at front"<<l1.front()<<endl;
cout<<"Element at back "<<l1.back()<<endl;
cout<<"**************"<<endl;
cout<<"Iterating from top to bottom"<<endl;
list<int>::iterator tb=l1.begin();
while(tb!=l1.end())
{
cout<<*tb<<endl;
++tb;
}
cout<<"**************************"<<endl;
l1.push_front(1000);
cout<<"l1 size : "<<l1.size()<<endl;
cout<<"Iterating from bottom to top "<<endl;
list<int>::reverse_iterator bt=l1.rbegin();
while(bt!=l1.rend())
{
cout<<*bt<<endl;
++bt;
}
cout<<"*********************"<<endl;
l1.push_front(1000);

return 0;
}