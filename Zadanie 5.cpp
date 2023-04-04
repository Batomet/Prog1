#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

//5
int main() {
	int tab[10][10];
	int tab2[10][10];
	int tab3[10][10];
	int x1, x2, y1, y2;
	cout << "podaj wielkosc pierwszej tablicy :" << endl;
	cin >> x1;
	cout << "na" << endl;
	cin >> x2;
	cout << "podaj wielkosc drugiej tablicy :" << endl;
	cin >> y1;
	cout << "na" << endl;
	cin >> y2;

	if (x1 == y1 && x2 == y2) {

		srand(time(0)*8000);
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				tab[i][j] = rand() % 11 + 0;
				cout << tab[i][j] << ' ';
			}cout << endl;
		}
		cout << endl;
		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				tab2[i][j] = rand() % 11 + 0;
				cout << tab2[i][j] << ' ';
			}cout << endl;
		}
		cout << endl;

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				tab3[i][j] = tab[i][j] + tab2[i][j];
				cout << tab3[i][j] << ' ';

			}cout << endl;
		}
	}
	else {
		cout << "tablice maja inne wymiary" << endl;
	}
}
