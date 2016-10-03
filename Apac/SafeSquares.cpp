//#pragma once
//#include <iostream>
//#include <fstream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//ifstream in("B-large-practice.in");
//ofstream out("B-large.out");
//
//long long solution(vector<vector<int> >&arr)
//{
//	long long res = 0;
//	for (int i = 0; i < arr.size(); ++i)
//		res += arr[i][0];
//	for (int j = 1; j < arr[0].size(); ++j)
//		res += arr[0][j];
//	for (int i = 1; i < arr.size(); ++i)
//		for (int j = 1; j < arr[0].size(); ++j)
//		{
//			if (arr[i][j] == 1)
//			{
//				arr[i][j] = 1 + min(arr[i - 1][j], min(arr[i - 1][j - 1], arr[i][j - 1]));
//				res += arr[i][j];
//			}
//		}
//	return res;
//}
//void solve(int Case)
//{
//	int r, c, k;
//	in >> r >> c >> k;
//	vector<vector<int> >arr(r, vector<int>(c, 1));
//	for (int i = 0; i < k; ++i)
//	{
//		int x, y;
//		in >> x >> y;
//		arr[x][y] = 0;
//	}
//	out << "Case #" << Case << ": " << solution(arr) << endl;
//}
//int main()
//{
//	int cases;
//	in >> cases;
//	for (int Case = 1; Case <= cases; ++Case)
//	{
//		solve(Case);
//	}
//	return 0;
//}