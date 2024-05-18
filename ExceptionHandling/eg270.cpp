#include<iostream>
using namespace std;
int main()
{
int x,y,q,r;
cout<<"Enter dividend :";
cin>>x;
cout<<"Enter divisor :";
cin>>y;
q=x/y;
r=x%y;
cout<<"Quotient is : "<<q<<endl;
cout<<"Reminder is : "<<r<<endl;

return 0;
}