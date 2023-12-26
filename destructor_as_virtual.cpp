

#include<iostream>


using namespace std;

class base {
public:
    base();
 virtual ~base() {
cout << "This is base's vfunc().\n";
}
};


class derived1 :public base {
public:
 ~base() {
cout << "This is derived1's vfunc().\n";
}
};

class derived2 : public base {
public:
 ~base() {
cout << "This is derived2's vfunc().\n";
}
};


int main()
{
base *p, b;
derived1 d1;
derived2 d2;
// point to base
p = &b;
p->vfunc(); // access ?
// point to derived1
p = &d1;
p->vfunc(); // access ?
// point to derived2
p = &d2;
p->vfunc(); // access ? will point to the base class location is fixed
return 0;
}


