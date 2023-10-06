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
        int getX() {
            return x;
        }
        int getY() {
            return y;
        }
};
int main() {
    cout << "Coordinates" << endl;
    Car car(0, 0);
    for (int i = 0; i < 7; i++) {
        car.move();
        cout << "X: " << car.getX() << "\t Y: " << car.getY() << endl;
    }
    return 0;
};
