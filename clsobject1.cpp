

#include<bits/stdc++.h>
using namespace std;

class person
{
    char name[100];
    int age;
    public:
    void get();
    void put();
};

void person::put()
{
    cin>>name>>age;
}
void person::get()
{
    cout<<name<<" "<<age<<endl;
}

int main()
{
    person a;
    a.put();
    a.get();
}

