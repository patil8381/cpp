//if we will find the student whose addres is different but matches the data/rollNumber 
//- then it will be a problem.
//the map will find on the basis of student address and we are passing the existed student 
//- but with different address

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
class Course
{
private :
int code;
string title;
public:
Course()
{
this->code=-1;
this->title="";
}
Course(int code,string title)
{
this->code=code;
this->title=title;
}
void setCode(int code)
{
this->code=code;
}
int getCode()
{
return this->code;
}
void setTitle(string title)
{
this->title=title;
}
string getTitle()
{
return this->title;
}
};
bool studentRollNumberComparator(Student *left,Student *right)
{
return left->getRollNumber()>right->getRollNumber();
}
bool studentNameComparator(Student *left,Student *right)
{
return left->getName()<right->getName();
}

int main()
{
Student s1(101,"Sameer");
Student s2(102,"Mukesh");
Student s3(103,"Rakesh");
Student s4(104,"Suresh");
Student s5(105,"Amit");

Course c1(101,"C++");
Course c2(102,"Java");
Course c3(103,"Python");

map<int,Student *> students;
students.insert(pair<int,Student *>(101,&s1));
students.insert(pair<int,Student *>(102,&s2));
students.insert(pair<int,Student *>(103,&s3));
students.insert(pair<int,Student *>(104,&s4));
students.insert(pair<int,Student *>(105,&s5));

map<Student *,Course *,bool (*)(Student *,Student *)> studentCourse(studentRollNumberComparator);
studentCourse.insert(pair<Student *,Course *>(&s1,&c1));
studentCourse.insert(pair<Student *,Course *>(&s2,&c2));
studentCourse.insert(pair<Student *,Course *>(&s3,&c3));
studentCourse.insert(pair<Student *,Course *>(&s4,&c1));

Student *s=new Student;
s->setRollNumber(103);
s->setName("Lokesh");

map<Student *,Course *>::iterator sci;
sci=studentCourse.find(s);
if(sci==studentCourse.end())
{
cout<<"Student : "<<s->getName()<<" is not registered for any course."<<endl;
return 0;
}

Course *c;
c=sci->second;
cout<<"Student "<<s->getName()<<" is registered for course "<<c->getTitle()<<endl;
for(sci=studentCourse.begin();sci!=studentCourse.end();sci++)
{
s=sci->first;
c=sci->second;
cout<<s->getRollNumber()<<","<<s->getName()<<","<<c->getTitle()<<endl;
}
return 0;
}