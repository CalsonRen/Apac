///*
//remove exactly one interval such that the covered area of the remaining intervals is minimized
//*/
//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <algorithm>
//#include <set>
////#include <pair>
//
//using namespace std;
//
//struct{
//	bool operator()(pair<int, int>a, pair<int, int>b)
//	{
//		if (a.first < b.first)
//			return true;
//		else if (a.first == b.first && a.second < b.second)
//			return true;
//		return false;
//	}
//}cmp;
//
//
//int getRes(ifstream& in)
//{
//	int l1, r1, a, b, c1, c2, m, n;
//	in >> n >> l1, r1, a, b, c1, c2;
//	vector<pair<int, int> >arr;
//	int  x = l1;
//	int  y = r1;
//	arr.push_back({ x, y});
//	for (int i = 1; i < n; ++i)
//	{
//		x = ((long long)a * x + b * y + c1) % m;
//		y = ((long long)a * y + b * x + c2) % m;
//		arr.push_back({ min(x,y), max(x, y) });
//	}
//	vector<int>temp;
//	for (int i = 0; i < n; ++i)
//	{
//		temp.push_back(arr[i].first - 1);
//		temp.push_back(arr[i].first);
//		temp.push_back(arr[i].second);
//	}
//	sort(temp.begin(), temp.end());
//	auto it = unique(temp.begin(), temp.end());
//	temp.resize(distance(temp.begin(), it));
//
//	vector<int>num(m, 0);
//	vector<long long>counts(m, 0);
//	for (int i = 0; i < n; ++i)
//	{
//		//the position of the every interval
//		arr[i].first = lower_bound(temp.begin(), temp.end(), arr[i].first) - temp.begin();
//		arr[i].second = lower_bound(temp.begin(), temp.end(), arr[i].second) - temp.begin();
//		num[arr[i].first]++;
//		num[arr[i].second - 1]--;
//		
//
//	}
//
//	for (int i = 1; i < temp.size(); ++i)
//		num[i] += num[i - 1];
//
//	long long len;
//	for (int i = 0; i < temp.size(); ++i)
//	{
//		int x = 1;
//		if (i)
//			x = temp[i] - temp[i - 1];
//		if (num[i] == i)
//			counts[i] += x;
//		if (num[i])
//			len += x;
//	}
//	long long ret = 0;
//	for (int i = 1; i< temp.size(); ++i)
//	{
//		long long res = count[i] - count[i-1]
//	}
//
//
//
//
//	int res = 0;
//	sort(arr.begin(), arr.end(), cmp);
//	int first = (*arr.begin()).first;
//	int second = (*arr.begin()).second;
//	int maxCover = 0;
//
//
//	return res;
//	
//	
//}
//
//int main()
//{
//	ifstream in("C-small-practice.in");
//	ofstream out("C-small.out");
//
//	int cases;
//	in >> cases;
//	int count = 1;
//	while (cases)
//	{
//		int res = getRes(in);
//		out << "Case #" << count << ": " << res << endl;
//		count++;
//		cases--;
//	}
//	return 0;
//}
//
