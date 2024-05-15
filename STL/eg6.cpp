#include<iostream>
#include<forward_list>
using namespace std;
forward_list<int> * getFL()
{
forward_list<int> *list;
cout<<"1"<<endl;
list=new forward_list<int>; 
cout<<"2"<<endl;
list->push_front(23);
list->push_front(43);
list->push_front(61);
list->push_front(12);
cout<<""<<endl;
forward_list<int>::iterator i;
i=list->begin();
while(i!=list->end())
{
cout<<"in function : "<<(*i)<<endl;
i++;
}
return list;
};
int main()
{
forward_list<int> *fl1;
cout<<"1"<<endl;
cout<<"2"<<endl;
forward_list<int>::iterator i;
cout<<"3"<<endl;
fl1=getFL();
cout<<"5"<<endl;
i=fl1->begin();
while(i!=(fl1)->end())
{
cout<<"in main loop ";
cout<<(*i)<<endl;
i++;
}
cout<<"6"<<endl;

return 0;
};