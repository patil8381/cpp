#include<iostream>
using namespace std;
int main()
{
int req,*x,y;
cout<<"Enter requirement : ";
cin>>req;

try
{
x=new int[req];
}catch(bad_alloc &ba)
{
cout<<"Invalid requirement."<<endl;
cout<<ba.what()<<endl;
return 0;
}
for(y=0;y<req;y++)
{
cout<<"Enter number : ";
cin>>x[y];
}
int total=0;
for(y=0;y<req;y++)
{
total=total+x[y];
}
cout<<"Total is : "<<total<<endl;
return 0;
}