#include "logic.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n;

	cout << "Input size of the square matrix (n): ";
	cin >> n;

	init(matrix, n, n, 0, 10);

	cout << "Matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	int sum = sum_main_elements(matrix, n);

	cout << "Sum of main elements is " << to_string(sum) << endl;

	sum = sum_addition_elements(matrix, n);

	cout << "Sum of addition elements is " << to_string(sum);

	return 0;
}