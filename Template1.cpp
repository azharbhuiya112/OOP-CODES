#include<iostream>
using namespace std;


template<typename a,typename b>
void addnmbr(a x,b y)
{
    cout<<x+y;
}

int main()
{


    int A=10;
    float B=10.5;
    addnmbr(A,B);


    return 0;
}
