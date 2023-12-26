#include<iostream>


using namespace std;
class student{

protected:
    int roll;

public:
    void getnmbr(int);
    void putnmbr();


};



void student::getnmbr(int a)
{
    roll=a;
}
void student::putnmbr()
{
    cout<<"Roll:"<<roll<<endl;

}

class test:public student
{
protected:
    float sub1;
    float sub2;
public:
    void getmark(float,float);
    void putmark();
};

void test::getmark(float x,float y)
{
    sub1=x;
    sub2=y;
}
void test::putmark()
{
    cout<<"sub1:"<<sub1<<endl;
        cout<<"sub2:"<<sub2<<endl;

}


class result:public test
{
    float total;
public:
    void display();
};

void result::display()
{
     //putnmbr();
     //putmark();
    cout<<"total:"<<sub1+sub2;
}


int main()
{


  result a;
  a.getnmbr(112);
  a.putnmbr();
  a.getmark(100,100.5);
  a.putmark();
  a.display();











    return 0;
}
