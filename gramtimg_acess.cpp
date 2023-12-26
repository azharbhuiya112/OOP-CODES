#include<iostream>


using namespace std;

class base {
int i;
protected:
int x;
public:
int j, k;
void seti(int p) { i = p; }
int geti() { return i; }
};



class derived: private base {
public:
base::j; // make j public
base::x; // make x public
using base::seti; // make seti() public
base::geti; // make geti() public
//base::i; // illegal
int a; // public
protected:
int b;
};




int main()
{
derived ob;
ob.a = 10;
//ob.b = 10; // illegal
ob.x = 20; // legal
//ob.i = 10; // illegal
ob.j = 30; // legal
//ob.k = 30; // illegal
ob.seti(10);
cout << ob.geti() << " " << ob.a ;
cout << " " << ob.x << " " << ob.j;
return 0;
}

