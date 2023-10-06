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
};
int main() {};