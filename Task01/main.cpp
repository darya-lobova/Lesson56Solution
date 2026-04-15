#include "util.h"

int main() {
	int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n, m;

	cout << "Input size of the matrix (n and m): ";
	cin >> n >> m;

	init(matrix, n, m, 0, 10);

	cout << "Matrix:\n";
	cout << convert_to_string(matrix, n, m) << endl;

	return 0;
}