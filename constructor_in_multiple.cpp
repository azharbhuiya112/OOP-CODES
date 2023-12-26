#include<iostream>


using namespace std;


class Base1
{    protected :
	int a;
      public :
	Base1(int x)
	{   a = x;
	cout<<"Constructing Base 1"<<endl;
	}
	~Base1( )
	{   cout<<"Destructing Base1"<<endl;    }
};



class Base2
{
    protected:
	int b;

     public :
	Base2(int y)
	{
	    b = y;

	 cout<<"Constructing Base2"<<endl;

    }
	~Base2 ( )
	{  cout<< "Destructing Base2 "<<endl;    }
};


class Derived : public Base2, public Base1
{

int c;
public :
Derived (int i, int j, int k): Base2(i), Base1(j)
{c = k; cout <<"Constructing Derived"<<endl;}
~Derived ( )
{cout << "Destructing Derived "<<endl;}
void show( )
{cout<<"1."<<a<<"\t 2."<<b <<"\t 3."<<c<<endl;}
};



int main ( )
{
Derived ob(14,15,16);
ob.show();
}


