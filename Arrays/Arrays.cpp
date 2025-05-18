// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Arrays.h"

using namespace std;
void practice1_MaxValue()
{
	int arr[100][100];
	int rows, cols;
	cin >> rows >> cols;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cin >> arr[row][col];
		}
	}

	int max_i = 0, max_j = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (arr[i][j] > arr[max_i][max_j])
			{
				max_i = i;
				max_j = j;
			}
		}
	}
	cout << "Max value at position " << max_i << " " << max_j << " With value = " << arr[max_i][max_j];
}
void practice2_SpecialPrint()
{
	int arr[100][100];
	int rows, cols;
	cin >> rows >> cols;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cin >> arr[row][col];
		}
	}
	int leftDiagonal = 0, rightDiagonal = 0, lastRowSum = 0, lastColSum = 0;
	for (int i = 0, j = 0; i < rows && j < cols; i++, j++)
	{
		leftDiagonal += arr[i][j];
	}
	for (int i = 0, j = cols - 1; i < rows && j >= 0; i++, j--)
	{
		rightDiagonal += arr[i][j];
	}
	for (int j = 0; j < cols; j++)
	{
		lastRowSum += arr[rows - 1][j];
	}
	for (int i = 0; i < rows; i++)
	{
		lastColSum += arr[i][cols - 1];
	}
	cout << leftDiagonal << " " << rightDiagonal << endl;
	cout << lastRowSum << " " << lastColSum << endl;
}
void practice3_Swap2Columns()
{
	int arr[100][100];
	int rows, cols;
	cin >> rows >> cols;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cin >> arr[row][col];
		}
	}
	int index1, index2;
	cin >> index1 >> index2;
	for (int i = 0; i < rows; i++)
	{
		int temp = arr[i][index1];
		arr[i][index1] = arr[i][index2];
		arr[i][index2] = temp;
	}
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cout << arr[row][col] << " ";
		}
		cout << endl;
	}
}

void practice4_GreedyRobot()
{
	int arr[100][100];
	int rows, cols;
	cin >> rows >> cols;
	for (int row = 0; row < rows; row++)
	{
		for (int col = 0; col < cols; col++)
		{
			cin >> arr[row][col];
		}
	}
	int sum = 0;
	int i = 0, j = 0;
	for (; i < rows && j < cols;)
	{
		int best_val = -1, best_i = -1, best_j = -1;
		sum += arr[i][j];
		if (j + 1 < cols)
		{
			best_val = arr[i][j + 1];
			best_i = i;
			best_j = j + 1;
		}
		if (i + 1 < rows)
		{
			if (best_i == -1 || arr[i + 1][j] > best_val)
			{
				best_val = arr[i + 1][j];
				best_i = i + 1;
				best_j = j;
			}
		}
		if (i + 1 < rows && j + 1 < cols)
		{
			if (best_i == -1 || arr[i + 1][j + 1] > best_val)
			{
				best_val = arr[i + 1][j + 1];
				best_i = i + 1;
				best_j = j + 1;
			}
		}

		if (best_val == -1)
			break;
		i = best_i;
		j = best_j;
	}
	cout << sum;

}

int main()
{
	//practice1_MaxValue();
	//practice2_SpecialPrint();
	//practice3_Swap2Columns();
	practice4_GreedyRobot();
}

