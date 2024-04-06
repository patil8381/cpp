#include<string.h>
#include<iostream>

using namespace std;
void copyLargeString(char *d,char *a)
{
//copying largeset string to the local array
for(int i=strlen(a)-1,j=strlen(d)-1;i>=0;i--,j--)
{
d[j]=a[i];
}
}
void sumOf(char *a,char *b,char *c)
{
//taking local array and set all values to 0
char d[16];
int i;
for(i=0;i<15;i++)
{
d[i]='0';
}
d[i]='\0';

//getting the largest string to loop 
int l,s;
if(strlen(a)>strlen(b)) 
{
l=strlen(a)-1;
s=strlen(b)-1;
copyLargeString(d,a);
}
else
{
l=strlen(b)-1;
s=strlen(a)-1;
copyLargeString(d,b);
}
int carriedOver=0;
//adding both a and b string
int e=14;
for(int i=strlen(a)-1,j=strlen(b)-1;s>=0;i--,j--,s--,e--)
{
d[e]=((a[i]-48)+(b[j]-48)+carriedOver)+48;
carriedOver=0;

if(d[e]>57)
{
d[e]=d[e]-10+carriedOver;
carriedOver=1;
}
}

if(carriedOver) 
{
d[e]=49;
}

//copy to main pointer
e=14;
for(int i=l+1;i>=0;i--,e--)
{
c[i]=d[e];
}
c[l+2]='\0';
}

int main()
{
char a[15],b[15];
char c[15];
strcpy(a,"123");

cout<<"Enter a number to add in 123 : ";
cin>>b;
cout<<"a : "<<a<<endl;
cout<<"b : "<<b<<endl;
sumOf(a,b,c);
cout<<"c : "<<c<<endl;

return 0;
}
