#include<iostream>


using namespace std;

class B
{
    int a;
public:
    int b;

    void set_ab();
   int get_a();
    void show_a();
};


class d:public B
{
    int c;
public:
    void mul();
    void display();

};

void B::set_ab()
{
    a=5;
    b=10;
}

int B::get_a()
{
    return a;
}
void B::show_a()
{
    cout<<"a:"<<a<<endl;
}

void d::mul()
{
    c=b*get_a();
}
void d::display()
{
    cout<<"a:"<<get_
    )<<endl;
    cout<<"b:"<<b<<endl;
    cout<<"c:"<<c<<endl;


}






int main()
{

   d dd;
   dd.set_ab();
   dd.mul();
   dd.show_a() ;
   dd.display();


   dd.b=20;
   dd.mul();
   dd.display();











    return 0;
}
