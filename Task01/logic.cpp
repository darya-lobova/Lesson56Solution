#include "logic.h"

int sum_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}