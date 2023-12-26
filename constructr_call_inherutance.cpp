#include<iostream>

using namespace std;


class mother
{


public:

    mother()
    {
        cout<<"construct mother with no para"<<endl;
    }
    mother(int a)
    {
        cout<<"construct mother with  para"<<endl;
    }
   ~mother()
    {
        cout<<"destruct mother with"<<endl;
    }
};

class daughter:public mother
{
public:
    daughter()
    {
        cout<<"construct daughter with no   para"<<endl;
    }

    daughter(int a)
    {
        cout<<"construct daughter with int  para"<<endl;
    }
    ~daughter()
    {
        cout<<"destruct daughter "<<endl;
    }
};


class son:public mother {


public:
    son(int a):mother(a)
    {
        cout<<"son constr with para"<<endl;
    }
    son()
    {
        cout<<"son constructor"<<endl;
    }

    ~son()
    {
        cout<<"son destructor"<<endl;
    }



};



int main()
{
    daughter meem(10);
    son azhar(10);


    return 0;

}
