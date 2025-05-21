// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Functions.h"

using namespace std;

int main()
{
	int a, b, c, d, e, f;
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
