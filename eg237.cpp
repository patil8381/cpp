#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
forward_list<int> list={10,13,13,13,15,53,13,53,50};
list.sort();

forward_list<int>::iterator i=list.begin();
while(i!=list.end())
{
cout<<*i<<endl;
++i;
}
return 0;
}