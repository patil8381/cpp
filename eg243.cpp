#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
forward_list<string> list;
forward_list<string>::iterator i;
i=list.before_begin();
i=list.insert_after(i,string("Bobby"));
i=list.insert_after(i,string("Amit"));
i=list.insert_after(i,string("Zaheer"));
i=list.insert_after(i,string("Suresh"));
i=list.insert_after(i,string("Mukesh"));
i=list.insert_after(i,string("Gopal"));

cout<<"now sorting list"<<endl;
list.sort();
cout<<"After sorting "<<endl;
for(i=list.begin();i!=list.end();i++)
{
cout<<*i<<endl;
}

return 0;
}
