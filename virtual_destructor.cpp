#include<iostream>


using namespace std;

class khanki
{
public:
    khanki()
    {
        cout<<"Cons khan"<<endl;
    }
     virtual ~khanki()//virtual use
    {
        cout<<"Des khan"<<endl;
    }
};


class Base:public khanki
{
public:
Base(){cout<<"Base Constructor Called\n";}
~Base(){cout<<"Base Destructor called\n";}
};


class Derived:public Base
{
public:
Derived(){cout<<"Derived constructor called\n";}
~Derived(){cout<<"Derived destructor called\n";}
};


int main()
{
Base* b, *p;
Derived d;
p=new Base;
b=new Derived;//only call base and derive cnstructor
//delete b;//dont cll derive destructor
//delete p;
return 0;
}
//without dlt b & p
//Cons khan
//Base Constructor Called
//Derived constructor called
//Cons khan
//Base Constructor Called
//Cons khan
//Base Constructor Called
//Derived constructor called
//Derived destructor called
//Base Destructor called
//Des khan
//we can use virtual
