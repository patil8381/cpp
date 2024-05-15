#include<iostream>
#include<forward_list>
using namespace std;
forward_list<int *> *getFL()
{
forward_list<int *> list;
list.push_front(new int(50));
list.push_front(new int(33));
list.push_front(new int(40));
list.push_front(new int(67));
return &list;
};
int main()
{
forward_list<int> *fwd_list;

forward_list<int *> *fl1;
cout<<"1"<<endl;
fl1=getFL();
cout<<"2"<<endl;
forward_list<int *>::iterator i;
cout<<"3"<<endl;
cout<<"3"<<endl;
cout<<"3"<<endl;
cout<<"3"<<endl;
cout<<(*fl1).front();
i=(*fl1).begin();
cout<<"5"<<endl;
while(i!=(*fl1).end())
{
cout<<"in loop"<<endl;
cout<<*(*i)<<endl;
i++;
}
return 0;
};