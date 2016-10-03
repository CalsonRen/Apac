//#pragma once
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//#include <unordered_map>
//#include <string>
//#include <unordered_set>
//#include <sstream>
//using namespace std;
//
//ifstream in("C-large-practice.in");
//ofstream out("C-large.out");
//
//bool solution(unordered_map<string, unordered_set<string> >&hash)
//{
//	string key;
//	while (!hash.empty())
//	{
//		bool flag = false;
//		for (auto& it : hash)
//		{
//			if (it.second.empty())
//			{
//				key = it.first;
//				flag = true;
//				break;
//			}
//		}
//		if (flag)
//		{
//			hash.erase(key);
//			for (auto &it : hash)
//				it.second.erase(key);
//		}
//		else
//			return false;
//	}
//	return true;
//}
//
//void parse(unordered_map<string ,unordered_set<string> >&hash, string& temp)
//{
//	for (int i = 0; i < temp.size(); ++i)
//	{
//		if (temp[i] == '=' || temp[i] == '(' || temp[i] == ')' || temp[i] == ',')
//			temp[i] = ' ';
//	}
//	istringstream ss(temp);
//	string pre, cur;
//	ss >> pre >> cur;
//	hash[pre].insert(cur);
//	hash[pre].erase(cur);
//	while (ss >> cur)
//	{
//		hash[pre].insert(cur);
//	}
//	return;
//}
//void solve(int Case)
//{
//	int n;
//	in >> n;
//	unordered_map<string, unordered_set<string> >hash;
//	for (int i = 0; i < n; ++i)
//	{
//		string temp;
//		in >> temp;
//		parse(hash, temp);
//	}
//	bool res = solution(hash);
//	string output;
//	if (res)
//		output = "GOOD";
//	else
//		output = "BAD";
//	out << "Case #" << Case << ": " << output << endl;
//	
//}
//int main()
//{
//	int cases;
//	in >> cases;
//	for (int Case = 1; Case <= cases; ++Case)
//	{
//		solve(Case);
//		
//	}
//	return 0;
//}