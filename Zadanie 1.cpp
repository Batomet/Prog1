#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

//1
int main() {

	int tab[10][10];
	srand(time(0)*8000);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = rand() % 11;
			cout << tab[i][j] << ' ';
		}cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = rand() % 15 + 1;
			cout << tab[i][j] << ' ';
		}cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = rand() % 21 - 10;
			cout << tab[i][j] << ' ';
		}cout << endl;
	}

}
