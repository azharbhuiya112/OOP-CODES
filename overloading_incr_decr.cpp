#include<iostream>

using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overloading prefix increment operator
    Counter& operator++() {
        count++;
        return *this;

    }

    // Overloading postfix increment operator
    Counter operator++(int) {
       Counter temp = *this;
        count++;
        return temp;
    }

    // Overloading prefix decrement operator
    Counter& operator--() {
        count--;
        return *this;
    }

    // Overloading postfix decrement operator
    Counter operator--(int) {
        Counter temp = *this;
        count--;
        return temp;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c;
    c.display();

    ++c;
    c.display();

    c++;
    c.display();

    --c;
    c.display();

    c--;
    c.display();

    return 0;
}

