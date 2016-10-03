#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <string>
#include <unordered_set>
#include <sstream>
using namespace std;

ifstream in("D-large-practice.in");
ofstream out("D-large.out");

struct pairhash {
	template<typename T, typename U>
	size_t operator()(const std::pair<T, U> &x)const
	{
		return std::hash<T>()(x.first) ^ std::hash<U>()(x.second);
	}
};

typedef unordered_set<pair<int, int>, pairhash> USP;

bool solution(unordered_map<string, unordered_set<string> >&hash)
{
	string key;
	while (!hash.empty())
	{
		bool flag = false;
		for (auto& it : hash)
		{
			if (it.second.empty())
			{
				key = it.first;
				flag = true;
				break;
			}
		}
		if (flag)
		{
			hash.erase(key);
			for (auto &it : hash)
				it.second.erase(key);
		}
		else
			return false;
	}
	return true;
}

void parse(unordered_map<string, unordered_set<string> >&hash, string& temp)
{
	for (int i = 0; i < temp.size(); ++i)
	{
		if (temp[i] == '=' || temp[i] == '(' || temp[i] == ')' || temp[i] == ',')
			temp[i] = ' ';
	}
	istringstream ss(temp);
	string pre, cur;
	ss >> pre >> cur;
	hash[pre].insert(cur);
	hash[pre].erase(cur);
	while (ss >> cur)
	{
		hash[pre].insert(cur);
	}
	return;
}


void solve(int Case)
{
	int n;
	in >> n;
	USP hash;
	int max_a = 0;
	int max_d = 0;
	int x, y;
	for (int i = 0; i < n; ++i)
	{
		in >> x >> y;
		max_a = max(max_a, x);
		max_d = max(max_d, y);
		hash.insert(make_pair(x, y));
	}
	bool res = false;
	bool flag = true;
	while (flag)
	{
		flag = false;
		pair<int, int>key = make_pair(max_a, max_d);
		if (hash.find(key) != hash.end())
		{
			res = true;
			break;
		}
		int temp1 = 0;
		int temp2 = 0;
		for (auto& item : hash)
		{
			if (item.first < max_a && item.second < max_d)
			{
				flag = true;
				temp1 = max(temp1, item.first);
				temp2 = max(temp2, item.second);
			}
		}
		max_a = temp1;
		max_d = temp2;
	}

	string output;

	if (res)
		output = "YES";
	else
		output = "NO";
	out << "Case #" << Case << ": " << output << endl;

}
int main()
{
	int cases;
	in >> cases;
	for (int Case = 1; Case <= cases; ++Case)
	{
		solve(Case);

	}
	return 0;
}