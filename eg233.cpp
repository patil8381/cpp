#include<iostream>
#include<forward_list>
using namespace std;
int whatever(int e)	//predicate function (which are passed) of type boolean predicate
{
return e%2==0;
}
int main()
{
forward_list<int> list={10,23,12,42,22,13,15,17,40,50};			
list.remove_if(whatever);			//thiss will remove all even numbers from list
forward_list<int>::iterator i=list.begin();
while(i!=list.end())
{
cout<<*i<<endl;
++i;
}
return 0;
}