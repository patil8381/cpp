#include<iostream>
#include<forward_list>
using namespace std;
class Student
{
private:
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
Student(const Student &other)
{
this->rollNumber=other.rollNumber;
this->name=other.name;
}
Student & operator=(const Student &other)
{
this->rollNumber=other.rollNumber;
this->name=other.name;
return *this;
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
class StudentRollNumberComparator
{
public:
bool operator()(Student *left,Student *right)
{
return left->getRollNumber()<right->getRollNumber();
}
};
class StudentNameComparator
{
public:
bool operator()(Student *left,Student *right)
{
return left->getName()<right->getName();
}
};

int main()
{
forward_list<Student *> list;
forward_list<Student *>::iterator i;
i=list.before_begin();
i=list.insert_after(i,new Student(101,"Sameer"));
i=list.insert_after(i,new Student(102,"Amit"));
i=list.insert_after(i,new Student(211,"Zaheer"));
i=list.insert_after(i,new Student(95,"Suresh"));
i=list.insert_after(i,new Student(401,"Mahesh"));
i=list.insert_after(i,new Student(321,"Tony"));
i=list.insert_after(i,new Student(33,"Bobby"));

cout<<"now sorting list "<<endl;
StudentRollNumberComparator rollNumberComparator;
list.sort(rollNumberComparator);
cout<<"After sorting by rollNumber"<<endl;
Student *s;
for(i=list.begin();i!=list.end();i++)
{
s=*i;
cout<<s->getRollNumber()<<","<<s->getName()<<endl;
}
StudentNameComparator nameComparator;
list.sort(nameComparator);
cout<<"After sorting by Name"<<endl;
for(i=list.begin();i!=list.end();i++)
{
s=*i;
cout<<s->getRollNumber()<<","<<s->getName()<<endl;
}

//code to release memory
return 0;
}
