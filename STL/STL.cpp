

#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
#include <string>
#include <queue>

using namespace std;



bool IsValidParentesess(string str)
{
	map<char, char> mp;
	mp[')'] = '(';
	mp[']'] = '[';
	mp['}'] = '{';

	stack<char> parentesess;
	for (char ch : str)
	{
		if (mp.count(ch))
		{
			if (parentesess.empty())
				return false;
			char current_open = parentesess.top();
			char open = mp[ch];
			if (current_open != open)
				return false;
			parentesess.pop();
		}
		else
		{
			parentesess.push(ch);
		}
	}
	return parentesess.empty();
}

void FindFullNamesVeryBadSolution()
{
	int n;
	cin >> n;
	vector < vector<string>> vNames;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		vector<string> vFullName;
		for (int j = 0; j < m; j++)
		{
			string name;
			cin >> name;
			vFullName.push_back(name);
		}
		vNames.push_back(vFullName);
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		vector < vector<string>> vMatches;
		int m;
		cin >> m;
		vector<string> vFullName;
		for (int j = 0; j < m; j++)
		{
			string name;
			cin >> name;
			vFullName.push_back(name);
		}
		int MatchesNumber = 0;
		for (vector<string> CurrentName : vNames)
		{
			if (CurrentName.size() >= m)
			{
				bool isMatch = true;
				for (int idx = 0; idx < m; idx++)
				{
					if (CurrentName[idx] != vFullName[idx])
					{
						isMatch = false;
						break;
					}
				}
				if (isMatch)
				{
					MatchesNumber++;
					vMatches.push_back(CurrentName);
				}
			}
		}
		if (MatchesNumber)
		{
			cout << "[";
			for (int j = 0; j < vMatches.size() - 1; j++)
			{
				for (int r = 0; r < vMatches[j].size() - 1; r++)
					cout << vMatches[j][r] << " ";
				cout << vMatches[j][vMatches[j].size() - 1] << ",";
			}
			for (int r = 0; r < vMatches[vMatches.size() - 1].size() - 1; r++)
				cout << vMatches[vMatches.size() - 1][r] << " ";
			cout << vMatches[vMatches.size() - 1][vMatches[vMatches.size() - 1].size() - 1] << "]\n";
		}
	}
}

void FindFullNamesGoodSolution()
{
	int n;
	cin >> n;
	map<string, vector<string>> mpNames;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		vector<string> vFullName;
		string FullName = "";
		for (int j = 0; j < m; j++)
		{
			if (j != 0)
				FullName += " ";
			string name;
			cin >> name;
			vFullName.push_back(name);
			FullName += name;

		}
		string SubName = "";
		for (int j = 0; j < m; j++)
		{
			if (j != 0)
				SubName += " ";
			SubName += vFullName[j];
			mpNames[SubName].push_back(FullName);
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		int m;
		cin >> m;
		string SubName = "";
		for (int j = 0; j < m; j++)
		{
			if (j != 0)
				SubName += " ";
			string name;
			cin >> name;
			SubName += name;
		}
		if (mpNames.count(SubName))
		{
			cout << "[";
			for (int j = 0; j < mpNames[SubName].size(); j++)
			{
				cout << mpNames[SubName][j];
				if (j != mpNames[SubName].size() - 1)
				{
					cout << ",";
				}
			}

			cout << "]\n";
		}
	}
}

vector<int> FindMaxElementInSlidingWindow(vector<int>& nums, int k)
{
	vector<int> vMax;
	multiset<int> ms;
	for (int i = 0; i < k; i++)
	{
		ms.insert(-nums[i]);
	}
	vMax.push_back(-*ms.begin());
	for (int i = k; i < nums.size(); i++)
	{
		ms.erase(ms.find(-nums[i - k]));
		ms.insert(-nums[i]);
		vMax.push_back(-*ms.begin());
	}

	return vMax;

}

void reverse_queue(queue<int>& q)
{
	stack<int> s;
	while (!q.empty())
	{
		s.push(q.front());
		q.pop();
	}
	while (!s.empty())
	{
		q.push(s.top());
		s.pop();
	}
}

struct OurStack {
	queue<int> q;
	void push(int val)
	{
		queue<int> temp;
		temp.push(val);
		while (!empty())
		{
			temp.push(top());
			pop();
		}
		while (!temp.empty())
		{
			q.push(temp.front());
			temp.pop();
		}

	}
	void pop()
	{
		if (!q.empty())
			q.pop();
	}
	int top()
	{
		return q.front();
	}
	bool empty()
	{
		return q.empty();
	}
};

int reverse_num(int num)
{
	stack<int> s;

	while (num)
	{
		s.push(num % 10);
		num /= 10;
	}
	stack<int> temp;
	while (!s.empty())
	{
		temp.push(s.top());
		s.pop();
	}
	while (!temp.empty())
	{
		num *= 10;
		num += temp.top();
		temp.pop();
	}
	return num;
}

void AllWordsPrefix()
{
	int n;
	cin >> n;
	map<string, vector<string>> mp;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		string subName = "";
		for (int j = 0; j < input.size(); j++)
		{
			subName += input[j];
			mp[subName].push_back(input);
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		string input;
		cin >> input;
		if (mp.count(input))
		{
			for (string output : mp[input])
			{
				cout << output << " ";
			}
			cout << "\n";
		}
	}
}

void AllWordsPrefixOrdered()
{
	int n;
	cin >> n;
	map<string, set<string>> mp;
	for (int i = 0; i < n; i++)
	{
		string input;
		cin >> input;
		string subName = "";
		for (int j = 0; j < input.size(); j++)
		{
			subName += input[j];
			mp[subName].insert(input);
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		string input;
		cin >> input;
		if (mp.count(input))
		{
			for (string output : mp[input])
			{
				cout << output << " ";
			}
			cout << "\n";
		}
	}
}

string removeDuplicates(string s)
{
	stack<char> dup;
	for (int i = 0; i < s.size(); i++)
	{
		if (!dup.empty())
		{
			if (dup.top() == s[i])
			{
				dup.pop();
			}
			else
			{
				dup.push(s[i]);
			}
		}
		else
		{
			dup.push(s[i]);
		}
	}
	stack<char> temp;
	while (!dup.empty())
	{
		temp.push(dup.top());
		dup.pop();
	}
	string output;
	while (!temp.empty())
	{
		output += temp.top();
		temp.pop();
	}
	return output;
}

int ScoreOfParentheses(string input)
{
	map<char, char> mp;
	mp[')'] = '(';
	stack<int> ops;
	stack<char> parentheses;
	int score = 0;
	
	
}

int main()
{

	cout << ScoreOfParentheses("()((())())");
	cout << removeDuplicates("abbaca") << "\n";
	AllWordsPrefixOrdered();
	OurStack s;
	s.push(1);
	s.push(2);
	s.push(3);

	while (!s.empty())
	{
		cout << s.top() << " ", s.pop();
	}
	cout << "\n";

	cout << reverse_num(1234) << "\n";
	vector<int> nums = { 1,3,-1,-3,5,3,6,7 };
	vector<int> res = FindMaxElementInSlidingWindow(nums, 3);
	for (int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	bool resb = IsValidParentesess("()()()((()))");
	std::cout << resb;
	FindFullNamesGoodSolution();
	FindFullNamesVeryBadSolution();
}




