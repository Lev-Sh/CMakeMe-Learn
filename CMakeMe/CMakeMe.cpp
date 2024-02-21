#include <iostream>
#include "CMakeMe.h"
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	system("chcp 1251>nul");
	srand(2);
	const int width = 9;
	const int height = 9;
	char lettMatrix[width][height];
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			lettMatrix[i][j] = 'A' + rand() % 25;
			cout << lettMatrix[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
