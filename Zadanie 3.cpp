#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <ctime>
#include <string>
#include <fstream>
using namespace std;

//3
int main() {
	int tab[10][10];
	int tab2[10][10];
	int tab3[10][10];
	int l1, l2, l11, l22;
	cout << "Podaj zakres liczb losowych dla pierwszej tablicy" << endl;
	cout << "zakres od : " << endl;
	cin >> l1;
	cout << "zakres do : " << endl;
	cin >> l2;
	cout << "Podaj zakres liczb losowych dla drugiej tablicy" << endl;
	cout << "zakres od : " << endl;
	cin >> l11;
	cout << "zakres do : " << endl;
	cin >> l22;
	int l3 = l2 - l1;
	int l33 = l22 - l11;
	srand(time(0)*8000);
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab[i][j] = rand() % l3 + l1;
			cout << tab[i][j] << ' ';
		}cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			tab2[i][j] = rand() % l33 + l11;
			cout << tab2[i][j] << ' ';
		}cout << endl;
	}
	cout << endl;
}