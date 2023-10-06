#include <iostream>
using namespace std;
class Car {
private:
    int x;
    int y;
public:
    Car(int x, int y) {
        this->x = x;
        this->y = y;
    }
    void move() {
        x = x + 3;
        y = y + 1;
    }
};
int main() {};