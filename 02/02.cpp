#include <iostream>

using namespace std;

class Road {
	private:
		int length, width;
	public:
		Road(int newlength, int newwidth) {
			length = newlength;
			width = newwidth;
		}
		void Print() {
			cout << "Length: " << length << endl;
			cout << "Width: " << width << endl;
		}
};
class Car {
	private:
		double X, V;
		int P;
	public:
		Car(double newx, int newp, double newv) {
			X = newx;
			P = newp;
			V = newv;
		}
		void Print() {
			cout << "X: " << X << endl;
			cout << "P: " << P << endl;
			cout << "V: " << V << endl;
		}
};
int main() {
	cout << "Road length and width:" << endl;
		Road road1(4, 10);
		road1.Print();
	cout << "Car position:" << endl;
		Car car1(0, 2, 2);
		car1.Print();
	return 0;
}

