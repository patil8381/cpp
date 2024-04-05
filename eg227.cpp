#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
forward_list<int> list;
forward_list<int>::iterator i=list.before_begin();
i=list.insert_after(i,10);
i=list.insert_after(i,20);
i=list.insert_after(i,30);
i=list.insert_after(i,40);
i=list.insert_after(i,50);
i=list.insert_after(i,60);

/*
list.insert_after(i,10);
list.insert_after(i,20);
list.insert_after(i,30);
list.insert_after(i,40);
list.insert_after(i,50);
list.insert_after(i,60);
//if we use this then the code will compile 
*/

i=list.begin();
while(i!=list.end())
{
cout<<*i<<endl;
++i;
}
return 0;
}