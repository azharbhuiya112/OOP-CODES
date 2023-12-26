#include<iostream>


using  namespace std;



    class a
    {
    protected:
        int m;

  public:
       void getm(int);

    };

    void a::getm(int x)
    {
        m=x;
    }
     class b
    {
    protected:
        int n;

  public:
       void getn(int);

    };

    void b::getn(int y)
    {
        n=y;
    }


  class c:public a,public b
  {
  protected:
    int total;
  public:

    void display()
    {
      cout<<m+n;
    }
  };

int main()
{

    c A;
    A.getm(10);
    A.getn(20);

    A.display();



    return 0;
}
