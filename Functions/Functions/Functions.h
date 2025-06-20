#include <string>
using namespace std;

#pragma once
int GetMax(int a,int b,int c);
int GetMax(int a,int b,int c,int d);
int GetMax(int a,int b,int c,int d,int e);
int GetMax(int a,int b,int c,int d,int e,int f);
int factroial(int n);
void print_triangle(int levels);
void print_triangleV2(int levels);
void printstars(int levels);
void print_3n_plus_1(int n);
int length_3n_plus_1(int n);
long my_pow(int n, int p);
int arr_max(int arr[], int len);
int arr_sum(int arr[], int len);
double arr_average(int arr[], int len);
void arr_increment(int arr[], int len);
void arr_accumulation(int arr[], int len);
void left_max(int arr[], int len);
void right_max(int arr[], int len);
int suffix_sum(int arr[],int len, int n);
int prefix_sum(int arr[], int len, int n);
bool isPalindrome(int arr[], int len, int st);
bool is_substring(string main, string prefix, int start_pos = 0);
int count_primes(int start, int end);
bool is_prime(int n,int start = 2);
//int path_sum(int grid[100][100], int row, int col, int ROWS, int COLS);
int fibonacci(int n);
string reverse_str(const string& str);