#include<iostream>
using namespace std;
void calculate(int dividend,int divisor,int *quotient,int *reminder)
{
if(divisor==0) throw divisor;
*quotient=dividend/divisor;
*reminder=dividend%divisor;
}
int main()
{
int x,y,q,r;
cout<<"Enter dividend : ";
cin>>x;
cout<<"Enter divisor : ";
cin>>y;
try
{
//if(y==0) throw y;
calculate(x,y,&q,&r);
cout<<"Quotient is : "<<q<<endl;
cout<<"Reminder is : "<<r<<endl;
}catch(int i)
{
cout<<"Cannot divided by : "<<i<<endl;
}
return 0;
}