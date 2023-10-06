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
int main() {};