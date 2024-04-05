#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
cout<<"Thinkig machines"<<endl;
forward_list<int> list;
forward_list<int>::iterator i;
i=list.before_begin();
i=list.insert_after(i,10);
i=list.insert_after(i,20);
i=list.insert_after(i,100);
i=list.insert_after(i,-20);
i=list.insert_after(i,310);
i=list.insert_after(i,44);

cout<<"Now sorting the list"<<endl;
list.sort();
cout<<"After sorting list"<<endl;
for(i=list.begin();i!=list.end();++i)
{
cout<<*i<<endl;
}

return 0;
}