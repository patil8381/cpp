#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
forward_list<int> list={10,20,30,40,50};
forward_list<int>::iterator i=list.end();
list.insert_after(i,60);

i=list.begin();
while(i!=list.end())
{
cout<<*i<<endl;
++i;
}
return 0;
}