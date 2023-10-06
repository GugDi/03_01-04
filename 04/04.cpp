#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

class TBook {
public:
	string Name;
	string Author;
	int Count;
};

int main() {
	const int s = 3;
	TBook books[s];
	ifstream fin;
	fin.open("book.txt");
	if (fin.is_open()) {
		for (int i = 0; i < s; i++) {
			string temp;
			getline(fin, books[i].Name);
			getline(fin, books[i].Author);
			getline(fin, temp);
			books[i].Count = stoi(temp);
		}
		fin.close();
	}
	else return 1;
};
