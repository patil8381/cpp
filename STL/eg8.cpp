#include<iostream>
#include<forward_list>
using namespace std;
forward_list<int *> * getFwdList()
{
forward_list<int *> *list;
cout<<"1"<<endl;
list=new forward_list<int *>; 
cout<<"2"<<endl;
forward_list<int *>::iterator i;
i=list->before_begin();
list->insert_after(i,new int(23));
i++;
list->insert_after(i,new int(43));
list->insert_after(i,new int(61));
list->insert_after(i,new int(12));
list->push_front(new int(123));
list->push_front(new int(13));
list->push_front(new int(15));
cout<<" "<<endl;
i=list->begin();
while(i!=list->end())
{
cout<<"in function : "<<(*(*i))<<endl;
++i;
}
return list;
};
int main()
{
forward_list<int *> *fl1;
cout<<"1"<<endl;
cout<<"2"<<endl;
forward_list<int*>::iterator i;
cout<<"3"<<endl;
fl1=getFwdList();
cout<<"5"<<endl;
i=fl1->begin();
while(i!=(fl1)->end())
{
cout<<"in main loop ";
cout<<(*(*i))<<endl;
i++;
}
cout<<"6"<<endl;

return 0;
};