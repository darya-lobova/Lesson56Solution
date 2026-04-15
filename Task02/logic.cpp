#include "logic.h"

int sum(int vector[], int n) {
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		sum += vector[i];
	}
	return sum;
}

int find_row_with_extreme_sum(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int row = 0;
	int s = sum(matrix[0], n);

	for (int i = 1; i < n; i++)
	{
		int row_sum = sum(matrix[i], n);
		if (s < row_sum) {
			s = row_sum;
			row = i;
		}
	}

	return row;
}