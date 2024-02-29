#include<iostream>
using namespace std;

class TMDate
{
private:
int dayOfMonth;
int month;
int year;
int dayNumber;
int toDayNumber();
int isLeapYear(int y);
void fromDayNumber();

public:
TMDate();
int getDayOfMonth();
int getMonth();
int getYear();
void operator+=(int days);
void operator-=(int days);

int getDayNumber()
{
return dayNumber;
}


};
TMDate::TMDate()
{
time_t x;
time(&x);
struct tm *now;
now=localtime(&x);
this->dayOfMonth=now->tm_mday;
this->month=now->tm_mon+1;
this->year=now->tm_year+1900;
toDayNumber();
}
int TMDate::toDayNumber()
{
int x=0;
int y=1901;
int m;
while(y<this->year)
{
if(isLeapYear(y)) x=x+366;
else x=x+365;
y++;
}
int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(isLeapYear(this->year)) mth[1]=29;
m=0;
int ep=this->month-2;
while(m<=ep)
{
x=x+mth[m];
m++;
}
x=x+this->dayOfMonth;
this->dayNumber=x;
return dayNumber;
}
int TMDate::isLeapYear(int y)
{
if(y%400==0) return 1;
else if(y%100==0) return 0;
else if(y%4==0) return 1;
else return 0;
}
void TMDate::fromDayNumber()
{
if(this->dayNumber==0)
{
this->dayOfMonth=0;
this->month=0;
this->year=0;
return ;
}
int x=this->dayNumber;
int d,m,y;
int daysInYear;
int daysInMonth;
y=1901;
while(1)
{
if(isLeapYear(y)) daysInYear=366;
else daysInYear=365;
if(x<daysInYear) break;
x=x-daysInYear;
y=y+1;
}
int mth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(isLeapYear(y)) mth[1]=29;
m=0;
while(1)
{
daysInMonth=mth[m];
if(x<daysInMonth) break;
x=x-daysInMonth;
m++;
}
m++;
d=x;
//cout<<d<<" "<<m<<" "<<y<<endl;
this->dayOfMonth=d;
this->month=m;
this->year=y;
}
int TMDate::getDayOfMonth()
{
return this->dayOfMonth;
}
int TMDate::getMonth()
{
return this->month;
}
int TMDate::getYear()
{
return this->year;
}
ostream & operator<<(ostream &oo,TMDate &tmDate)
{
oo<<tmDate.getDayOfMonth()<<"/"<<tmDate.getMonth()<<"/"<<tmDate.getYear();
return oo;
}
void TMDate::operator+=(int days)
{
if(this->dayNumber==0) return ;
this->dayNumber+=days;
this->fromDayNumber();
}
void TMDate::operator-=(int days)
{
if(this->dayNumber==0 || this->dayNumber<=days) return ;

this->dayNumber-=days;
this->fromDayNumber();
}

int main()
{
TMDate date;
cout<<date<<endl;
cout<<date.getDayNumber()<<endl;
date+=20;
cout<<date<<endl;
cout<<date.getDayNumber()<<endl;
date-=45002;
cout<<date<<endl;


return 0;
}