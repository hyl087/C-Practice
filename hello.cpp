#include <iostream>
#include "math.h"
#include <stdlib.h>
using namespace std;


int main() {
	std:cout << "Hello World!";
	system("pause");
	int scores[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << i+1 << ".subject"<<j+1<<":";
			cin >> scores[i][j];
		}
		cout << endl;
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << i+1 << ".subject:" <<scores[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}