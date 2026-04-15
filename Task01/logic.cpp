#include "logic.h"

int sum_main_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][i];
	}

	return sum;
}

int sum_addition_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[i][n-1-i];
	}

	return sum;
}

int sum_inside_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {

	int sum = 0;

	for (int i = 1; i < n - 1; i++) {
		for (int j = 2; j < n; j++) {
			sum += matrix[i][j - 1];
		}
	}
	return sum;
}

int sum_border_elements(int matrix[DEFAULT_SIZE][DEFAULT_SIZE], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += matrix[0][i];
		sum += matrix[n-1][i];
		sum += matrix[i][0];
		sum += matrix[i][n-1];
	}

	sum -= matrix[0][0];
	sum -= matrix[0][n - 1];
	sum -= matrix[n - 1][0];
	sum -= matrix[n - 1][n - 1];

	return sum;
}
