#include<iostream>
using namespace std;
class TV
{
private:
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
};
class Fridge
{
private:
int price;
public:
void setPrice(int price)
{
this->price=price;
}
int getPrice()
{
return this->price;
}
};
int getTotalCost(TV &t,Fridge &f)
{
int total;
total=t.getPrice()+f.getPrice();
return total;
}

int main()
{
TV product1;
Fridge product2;
product1.setPrice(50000);
product2.setPrice(25000);
int total=getTotalCost(product1,product2);
cout<<"Total Cost "<<total<<endl;
return 0;
}