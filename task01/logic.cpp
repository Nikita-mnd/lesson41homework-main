#include "main.h"

int sum_of_numbers_on_diagonal(int m[SIZE][SIZE]) {
	int sum = 0;

	for (int i = 1; i < SIZE; i++) {

		for (int j = i-1; j < SIZE; j++) {
			if ((j == 0 && ((i == 1) || (i == 2)))||((j==2)&&(i != 3))) {
				sum += m[i][j];
			}
		}

	}

	return sum;
}