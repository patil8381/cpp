#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
forward_list<int> list={10,13,17,22,53,55,56,40,50};
forward_list<int>::iterator s=list.begin();
cout<<*s<<endl;
++s;
++s;
++s;
list.erase_after(s);
cout<<"***************"<<endl;

forward_list<int>::iterator i=list.begin();
while(i!=list.end())
{
cout<<*i<<endl;
++i;
}
return 0;
}