#include<iostream>

using namespace std;


class a
{
public:
    void display()

    {
        cout<<"from base: a"<<endl;
    }
};

class b:public a
{
public:
    void display()
    {
        cout<<"b"<<endl;
    }
};












int main()
{

   b B;
   B.display();
   B.a::display();
   B.b::display();





    return 0;
}
