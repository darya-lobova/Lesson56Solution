#include "logic.h"

int main() {
	//int matrix[DEFAULT_SIZE][DEFAULT_SIZE];
	int n = 4;

	//cout << "Input size of the square matrix (n): ";
	//cin >> n;

	//init(matrix, n, n, 0, 2);

	int matrix[][DEFAULT_SIZE]{
	{ 0,0,0,0 },
	{ 1,2,3,4 },
	{ 0,0,0,0 },
	{ 0,0,0,0 } 
	};

	int cube[2][2][2]
	{
		{{1,2}, {3,4}},
		{{5,6}, {7,8}}
	};
	

	cout << "Matrix:\n";
	cout << convert_to_string(matrix, n, n) << endl;

	int row = find_row_with_extreme_sum(matrix, n);

	cout << "Index of row with extreme sum is " << row + 1 << endl;


	return 0;
}