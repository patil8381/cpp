#include<utility>
#include<map>
#include<iostream>
using namespace std;

class Student
{
int rollNumber;
string name;
public:
Student()
{
this->rollNumber=0;
this->name="";
}
Student(int rollNumber,string name)
{
this->rollNumber=rollNumber;
this->name=name;
}
void setRollNumber(int rollNumber)
{
this->rollNumber=rollNumber;
}
int getRollNumber()
{
return this->rollNumber;
}
void setName(string name)
{
this->name=name;
}
string getName()
{
return this->name;
}

};
int main()
{
Student s1(101,"Sameer");
Student s2(102,"Mukesh");
Student s3(103,"Rakesh");
Student s4(104,"Suresh");
map<int,Student *> m;
m.insert(pair<int,Student *>(101,&s1));
m.insert(pair<int,Student *>(102,&s2));
m.insert(pair<int,Student *>(103,&s3));
m.insert(pair<int,Student *>(104,&s4));

Student *s;
int rollNumber;
cout<<"Enter roll number to search : ";
cin>>rollNumber;
map<int,Student *>::iterator i;
i=m.find(rollNumber);

if(i!=m.end())
{
s=i->second;
cout<<"Name : "<<s->getName()<<endl;
}
else 
{
cout<<"Invalid "<<endl;
}

return 0;
}