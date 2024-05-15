#include<iostream>
#include<forward_list>
using namespace std;
forward_list<int> * getFL()
{
forward_list<int> list;
list.push_front(23);
list.push_front(43);
list.push_front(61);
list.push_front(12);
forward_list<int>::iterator i;
i=list.begin();
while(i!=list.end())
{
cout<<(*i)<<endl;
i++;
}
return &list;
};
int main()
{
forward_list<int> fl1;
cout<<"1"<<endl;
fl1.push_front()=getFL();
cout<<"2"<<endl;
forward_list<int>::iterator i;
cout<<"3"<<endl;
cout<<(fl1)->front();
i=(*fl1).begin();
cout<<"5"<<endl;
while(i!=(*fl1).end())
{
cout<<"in loop"<<endl;
cout<<(*i)<<endl;
i++;
}
return 0;
};