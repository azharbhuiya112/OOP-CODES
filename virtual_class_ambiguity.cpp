#include<iostream>


using namespace std;

class Base{

public:
    int a;


};

class D1:virtual public Base{

public:
    int b;


};


class D2: public virtual Base{
public:

    int c;


};


class D3:public D1,public D2
{
public:
    int total;
void display()
{
    cout<<a+b+c;
}
};


int main()
{
    D3 ob;
   // ob.a=10; this is ambiguous  will call two times
   //after using virtual key word
   ob.a=10;
    ob.b=20;
    ob.c=30;
    ob.display();
}
