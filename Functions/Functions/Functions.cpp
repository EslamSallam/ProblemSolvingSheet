// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	int arrM1[6] = { 1,3,5,7,4,2 };
	int arrM2[6] = { 1,3,5,7,4,2 };
	int arrA[6] = { 1,2,3,4,5,6 };
	int arr[5] = { 1,8,2,10,3 };
	int arrS[5] = { 1,3,4,6,7 };
	int arrP[5] = { 1,3,4,3,1 };
	int arrNotP[5] = { 1,3,4,6,1 };
	cout << isPalindrome(arrNotP, 5, 0)<<endl;
	cout << isPalindrome(arrP, 5, 0) << endl;
	cout << suffix_sum(arrS, 5, 3) << endl;
	cout << prefix_sum(arrS, 5, 3) << endl;
	right_max(arrM1, 6);
	cout << endl;
	left_max(arrM2, 6);
	cout << endl;
	arr_accumulation(arrA, 6);
	cout << endl;
	arr_increment(arr, 5);
	cout << endl;
	cout << arr_max(arr, 5) << "\n";
	cout << arr_sum(arr, 5) << "\n";
	cout << arr_average(arr, 5) << "\n";
	cout << my_pow(5, 3) << "\n";
	print_3n_plus_1(9);
	cout << "\n";
	cout << length_3n_plus_1(6) << "\n";
	print_triangle(5);
	print_triangleV2(5);
	cout << factroial(6);
	cin >> a >> b >> c;
	cout << GetMax(a, b, c);
	string fd = "abcd";
	cout << reverse_str(fd);


}

int GetMax(int a, int b, int c)
{
	if (a >= b && a >= c)
	{
		return a;
	}
	else if (b >= a && b >= c)
	{
		return b;
	}
	else
	{
		return c;
	}
}

int GetMax(int a, int b, int c, int d)
{
	int local_max = GetMax(a, b, c);
	if (local_max >= d)
	{
		return local_max;
	}
	else
	{
		return d;
	}
}

int GetMax(int a, int b, int c, int d, int e)
{
	int local_max = GetMax(a, b, c);
	return GetMax(local_max, d, e);
}

int GetMax(int a, int b, int c, int d, int e, int f)
{
	int m1 = GetMax(a, b, c);
	int m2 = GetMax(d, e, f);
	if (m1 >= m2)
	{
		return m1;
	}
	else
	{
		return m2;
	}
}


string reverse_str(const string& str)
{
	string rev = "";
	for (int i = str.length() - 1; i >= 0; i--)
	{
		rev += str[i];
	}
	return rev;
}

int factroial(int n)
{
	cout << "Function Call: factorial: n=" << n << "\n";
	if (n == 1)
		return 1;
	return factroial(n - 1) * n;
}

void print_triangle(int levels)
{
	if (levels == 0)
		return;
	printstars(levels);
	print_triangle(levels - 1);
}

void print_triangleV2(int levels)
{
	if (levels == 0)
		return;
	print_triangleV2(levels - 1);

	printstars(levels);
}




void printstars(int levels)
{
	if (levels == 0)
	{
		cout << "\n";
		return;
	}
	cout << "*";
	printstars(levels - 1);
}

void print_3n_plus_1(int n)
{
	cout << n << " ";
	if (n == 1)
		return;
	if (n % 2 == 1)
		print_3n_plus_1(3 * n + 1);
	else
		print_3n_plus_1(n / 2);
}
int length_3n_plus_1(int n)
{
	if (n == 1)
		return 1;
	if (n % 2 == 1)
		return length_3n_plus_1(3 * n + 1) + 1;
	else
		return length_3n_plus_1(n / 2) + 1;
}

long my_pow(int n, int p)
{
	if (p == 0)
		return 1;
	return my_pow(n, p - 1) * n;
}

int arr_max(int arr[], int len)
{
	if (len == 0)
		return -1;
	if (len == 1)
		return arr[0];
	else
	{
		return max(arr_max(arr, len - 1), arr[len - 1]);
	}
}

int arr_sum(int arr[], int len)
{
	if (len == 0)
		return 0;

	return arr_sum(arr, len - 1) + arr[len - 1];
}

double arr_average(int arr[], int len)
{
	return arr_sum(arr, len) / (double)len;
}

void arr_increment(int arr[], int len)
{
	if (len == 0)
		return;
	arr_increment(arr, len - 1);
	cout << arr[len - 1] + len - 1 << " ";
}

void arr_accumulation(int arr[], int len)
{
	if (len == 0)
		return;
	arr_accumulation(arr, len - 1);
	cout << arr_sum(arr, len) << " ";
}

void left_max(int arr[], int len)
{
	if (len == 1)
	{
		cout << arr[len - 1] << " ";
		return;
	}
	left_max(arr, len - 1);
	arr[len - 1] = max(arr[len - 2], arr[len - 1]);
	cout << arr[len - 1] << " ";
}

void right_max(int arr[], int len)
{
	if (len == 1)
	{
		cout << arr[len - 1] << " ";
		return;
	}
	arr[len - 2] = max(arr[len - 2], arr[len - 1]);
	right_max(arr, len - 1);
	cout << arr[len - 1] << " ";
}

int suffix_sum(int arr[], int len, int n)
{
	if (n == 1)
		return arr[len - 1];

	return arr[len - n] + suffix_sum(arr, len, n - 1);
}
int prefix_sum(int arr[], int len, int n)
{
	if (n == 1)
		return arr[0];

	return arr[n - 1] + prefix_sum(arr, len, n - 1) ;
}

bool isPalindrome(int arr[], int len,int st)
{
	if (len <= 1)
		return true;
	if (arr[st] != arr[len - 1])
		return false;
	return isPalindrome(arr, len - 1, st + 1);
}

bool is_prefix(string main, string prefix, int start_pos = 0)
{
	
	if (main[start_pos] == prefix[])
	return false;
}



