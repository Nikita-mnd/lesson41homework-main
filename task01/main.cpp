#include "main.h"

int sum_of_numbers_on_diagonal(int m[SIZE][SIZE]);


int main() {

	int m[SIZE][SIZE]=
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	/*cout << "input numbers of masive: " << endl;
	for (int i = 0; i <= SIZE; i++) {
		for (int j = 0; j <= SIZE; j++) {
			cin >> m[i][j];
		}
	}*/

	int sum = sum_of_numbers_on_diagonal(m);
	cout << sum << endl;
	return 0;
}