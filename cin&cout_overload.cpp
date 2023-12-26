#include<iostream>

using namespace std;

class MyClass {
private:
    int data;

public:
  //  MyClass() : data(0) {}

    friend istream& operator>>(istream& input, MyClass& obj) {
        input >> obj.data;
        return input;
    }

    friend ostream& operator<<(ostream& output, const MyClass& obj) {
        output << "Data: " << obj.data;
        return output;
    }
};

int main() {
    MyClass obj;

    cout << "Enter data: ";
    cin >> obj;

    cout << "You entered: " << obj << endl;

    return 0;
}

