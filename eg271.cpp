#include<iostream>
using namespace std;
int main()
{
int x,y,q,r;
cout<<"Enter dividend :";
cin>>x;
cout<<"Enter divisor :";
cin>>y;
if(y!=0)
{
q=x/y;
r=x%y;
cout<<"Quotient is : "<<q<<endl;
cout<<"Reminder is : "<<r<<endl;
}
else
{
cout<<"Cannot divided by zero."<<endl;
}
return 0;
}