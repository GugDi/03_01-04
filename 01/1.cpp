#include <iostream>
using namespace std;
class Car {
private:
    int x, p, v;
public:
    Car() {
        x = 0;
        p = 0;
        v = 0;
    }
    Car(int x, int p, int v) {
        this->x = x;
        this->p = p;
        this->v = v;
    }
    void print() {
        cout << "X: " << x << endl;
        cout << "P: " << p << endl;
        cout << "V: " << v << endl;
    }
};
int main() {
    cout << "Before:" << endl;
    Car car;
    car.print();
    cout << "After:" << endl;
    Car car2(0, 2, 2);
    car2.print()
};