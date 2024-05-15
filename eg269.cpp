#include<iostream>
#include<stack>
using namespace std;
int toDigit(char d)
{
return d-48;
}
char toChar(int d)
{
return d+48;
}
int main()
{
char a[21];
char b[21];
char c[21];
cout<<"Enter first number : ";
cin>>a;
cout<<"Enter second number : ";
cin>>b;
int fi,si;
for(fi=0;a[fi]!='\0';fi++);
fi--;
for(si=0;b[si]!='\0';si++);
si--;
int left,right;
int carry=0;
int sum,mode;
stack<int> stk;
while(fi>=0 && si>=0)
{
left=toDigit(a[fi]);
right=toDigit(b[si]);
sum=left+right+carry;
mode=sum%10;
carry=sum/10;
stk.push(mode);
fi--;
si--;
}
while(fi>0)
{
left=toDigit(a[fi]);
sum=left+carry;
mode=sum%10;
carry=sum/10;
stk.push(mode);
fi--;
}
while(si>=0)
{
right=toDigit(b[si]);
sum=right+carry;
mode=sum%10;
carry=sum/10;
stk.push(mode);
si--;
}
if(carry>0) stk.push(carry);
int ti=0;
while(!stk.empty())
{
c[ti]=toChar(stk.top());
stk.pop();
ti++;
}
c[ti]='\0';
cout<<"Total of "<<a<<" and "<<b<<" is "<<c<<endl;

return 0;
}