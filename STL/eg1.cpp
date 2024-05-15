#include<iostream>
#include<forward_list>
using namespace std;
forward_list<int > getFL()
{
forward_list<int> list;
list.push_front(10);
list.push_front(60);
list.push_front(40);
list.push_front(20);
return list;
};
int main()
{
forward_list<int > fl1;
fl1=getFL();
forward_list<int >::iterator i;
i=(fl1).begin();
while(i!=(fl1).end())
{
cout<<*i<<endl;
i++;
}
return 0;
};