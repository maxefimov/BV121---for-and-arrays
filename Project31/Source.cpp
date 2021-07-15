#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	//1
	/*long long number;
	int digit;
	cout << "input number: ";
	cin >> number;
	cout << "input digit for delete: ";
	cin >> digit;

	long long newnumber{ 0 };
	while (number)
	{
		if (number % 10 != digit)
			newnumber = newnumber * 10 + number % 10;
		number /= 10;
	}
	while (newnumber)
	{
		number = number * 10 + newnumber % 10;
		newnumber /= 10;
	}

	cout << "number without digit " << digit << " = " << number;*/

	//2
	/*long long number;
	int max{}, maxindex{}, index{ 1 };

	cout << "input number: ";
	cin >> number;

	while (number)
	{
		if (number % 10 > max)
		{
			max = number % 10;
			maxindex = index;
		}
		index++;
		number /= 10;
	}

	cout << "max digit = " << max << " index = " << maxindex << "\n";*/

	//3
	//int widthBoard, widthCell;
	//bool order{ true };

	//cout << "Input width of Board: ";
	//cin >> widthBoard;
	//cout << "Input width of Cell: ";
	//cin >> widthCell;

	////cout << ((order) ? "*" : " ");

	//for (int rowBoard = 0; rowBoard < widthBoard; rowBoard++)
	//{
	//	for (int rowCell = 0; rowCell < widthCell; rowCell++)
	//	{
	//		for (int colBoard = 0; colBoard < widthBoard; colBoard++)
	//		{
	//			for (int colCell = 0; colCell < widthCell; colCell++)
	//			{
	//				cout << ((order) ? (char)176 : ' ');
	//				cout << ((order) ? (char)176 : ' ');
	//			}
	//			order = !order;
	//		}
	//		cout << "\n";
	//	}
	//	order = !order;
	//}

	//4
	/*int number, columns, rowFull, rowRest;

	cout << "Input Number: ";
	cin >> number;
	cout << "Input count of Columns: ";
	cin >> columns;

	rowFull = number / columns;
	rowRest = number % columns;

	for (int row = 1; row <= rowFull; row++)
	{
		for (int col = 0; col < columns; col++)
		{
			if (col <= rowRest)
				cout << row + col * (rowFull + 1) << "\t";
			else
				cout << row + col * rowFull + rowRest << "\t";
		}
		cout << "\n";
	}

	for (int col = 1; col <= rowRest; col++)
		cout << col * (rowFull + 1) << "\t";*/

	//5
	/*srand(time(nullptr));

	const int SIZE{ 10 };
	int array[SIZE];

	for (int i = 0; i < SIZE; i++)
		array[i] = rand() % 100;

	for (int i = 0; i < SIZE; i++)
		cout << array[i] << " ";
	cout << "\n";

	int steps;
	cout << "Input step of offset: ";
	cin >> steps;

	for (int step = 0; step < steps; step++)
	{
		int temp{ array[SIZE - 1] };

		for (int i = SIZE - 1; i > 0; i--)
			array[i] = array[i - 1];

		array[0] = temp;
	}*/
	

	/*for(int step = 0; step < steps; step++)
	{
		int temp{ array[0] };

		for (int i = 0; i < SIZE - 1; i++)
			array[i] = array[i + 1];

		array[SIZE - 1] = temp;
	}*/

	/*for (int i = 0; i < SIZE; i++)
		cout << array[i] << " ";
	cout << "\n";*/

	return 0;
}