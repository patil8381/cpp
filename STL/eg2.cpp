#include<iostream>
#include<forward_list>
using namespace std;
forward_list<int *> getFL()
{
forward_list<int *> list;
int *x;
x=new int(10);
cout<<*x<<endl;
list.push_front(new int(50));
list.push_front(new int(33));
list.push_front(new int(40));
list.push_front(new int(67));
return list;
};
int main()
{
forward_list<int *> fl1;
fl1=getFL();
forward_list<int *>::iterator i;
i=(fl1).begin();
int *a;
a=fl1.front();
cout<<*a<<endl;
while(i!=(fl1).end())
{
cout<<*(*i)<<endl;
i++;
}
return 0;
};