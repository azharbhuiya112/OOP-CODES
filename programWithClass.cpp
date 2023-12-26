#include<iostream>


using namespace std;

class item
{
    int number;
    float cost;
public:
    void getdata(int a,float  b)
    {
       number=a;
       cost=b;
    }
    void putdata()
    {
        cout<<"NUmber:"<<endl;
        cout<<"cos:"<<endl;
    }
};




int main()
{
    item a;
    a.getdata(100,100.5);
    a.putdata();





    return 0;
}
