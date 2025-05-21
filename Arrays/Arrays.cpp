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

void practice5_SmallerRow()
{
	int arr[100][100];
	int rows, cols;
	cin >> rows >> cols;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}

	int q;
	cin >> q;
	int query[100][2];
	for (int i = 0; i < q; i++)
	{
		cin >> query[i][0] >> query[i][1];
		query[i][0]--;
		query[i][1]--;
	}
	for (int i = 0; i < q; i++)
	{
		bool isLess = true;
		for (int j = 0; j < cols; j++)
		{
			if (arr[query[i][0]][j] > arr[query[i][1]][j])
			{
				isLess = false;
			}
		}
		if (isLess)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}

void practice6_TriangularMatrix()
{
	int n;
	cin >> n;
	int arr[100][100];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}
	int UpperM = 0, LowerM = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			UpperM += arr[i][j];
		}
		for (int j = 0; j < i + 1; j++)
		{
			LowerM += arr[i][j];
		}
	}
	cout << LowerM << "\n" << UpperM;
}

void practice7_Transpose()
{
	int arr[100][100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int arrT[100][100];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arrT[i][j] = arr[j][i];
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arrT[i][j] << " ";
		}
		cout << endl;
	}
}

void practice8_HowManyPrimes()
{
	int arr[100][100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int q;
	cin >> q;
	int a, b, c, d;
	for (int i = 0; i < q; i++)
	{
		cin >> a >> b >> c >> d;
		for (int u = a; u <= c; u++)
		{
			for (int v = b; v <= d; v++)
			{
				//isPrime(arr[u][v]);
			}
		}
	}
}

void practice9_FindMountains()
{
	int arr[100][100];
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	int nei[9] = { -1,-1,-1,0,0,0,1,1,1 }, nej[9] = { -1,0,1,-1,0,1,-1,0,1 };
	int local_i = 0, local_j = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int current = arr[i][j];
			bool isMountain = true;
			for (int d = 0; d < 9; d++)
			{
				local_i = i + nei[d], local_j = j + nej[d];
				if (local_i < n && local_i >= 0 && local_j < m && local_j >= 0)
				{
					if (current < arr[local_i][local_j])
					{
						isMountain = false;
					}
				}
			}
			if (isMountain)
			{
				cout << i << " " << j << "\n";
			}
		}
	}

}

void practice10_ActiveRobot()
{
	int n, m;
	cin >> n >> m;
	int k;
	cin >> k;
	int karr[10000][2];
	int rarr[10000][2];
	int current_i = 0, current_j = 0;
	for (int i = 0; i < k; i++)
	{
		cin >> karr[i][0] >> karr[i][1];
		if (karr[i][0] == 1)
		{
			current_i -= karr[i][1] % n;
			if (current_i < 0)
				current_i += n;
		}
		else if (karr[i][0] == 2)
		{
			current_j += karr[i][1] % m;
			if (current_j >= m)
				current_j -= m;
		}
		else if (karr[i][0] == 3)
		{
			current_i += karr[i][1] % n;
			if (current_i >= n)
				current_i -= n;
		}
		else if (karr[i][0] == 4)
		{
			current_j -= karr[i][1] % m;
			if (current_j < 0)
				current_j += m;
		}
		rarr[i][0] = current_i;
		rarr[i][1] = current_j;
	}
	for (int i = 0; i < k; i++)
	{
		cout << "(" << rarr[i][0] << "," << rarr[i][1] << ")";
	}

}

void practice11_Flatten3DArray()
{
	int d, r, c;
	cin >> d >> r >> c;
	int idx = 0;
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < r; j++)
		{
			for (int k = 0; k < c; k++)
			{
				cout << idx++ << " = " << i << " " << j << " " << k << "\n";
			}
		}
	}

	while (true)
	{
		int input;
		cin >> input;
		int dd, rr, cc;
		if (input == 1)
		{
			cin >> dd >> rr >> cc;
			cout << dd * r * c + rr * c + cc;
		}
		if (input == 2)
		{
			cin >> idx;
			cout << "(" << idx / (r * c) << "," << (idx % r) << "," << (idx % c) << ")";
		}
	}
}

int main()
{
	//practice1_MaxValue();
	//practice2_SpecialPrint();
	//practice3_Swap2Columns();
	//practice4_GreedyRobot();
	//practice5_SmallerRow();
	//practice6_TriangularMatrix();
	//practice7_Transpose();
	//practice8_HowManyPrimes();
	//practice9_FindMountains();
	//practice10_ActiveRobot();
	//practice11_Flatten3DArray();
}

