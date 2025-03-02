#include "main.h"

int sum_of_numbers_on_diagonal(int m[SIZE][SIZE]) {
	int sum = 0;

	for (int i = 0; i < SIZE; i++) {

		for (int j = i+1; j < SIZE; j++) {
			sum += m[i][j];
		}

	}

	return sum;
}