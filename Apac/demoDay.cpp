//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//struct Info {
//	int right;
//	int down;
//};
//
//int findMin(vector<vector<char> >&arr)
//{
//	if (arr.empty() || arr[0].empty())
//		return 0;
//	int n = arr.size();
//	int m = arr[0].size();
//	vector<vector<Info> >rec(n, vector<Info>(m));
//	rec[0][0].right = 0;
//	if (arr[0][1] == 'b')
//		rec[0][0].down = 0;
//	else
//		rec[0][0].down = 1;
//	for (int i = 1; i < n; ++i)
//	{
//		if (arr[i][0] == 'b')
//			rec[i][0].down = rec[i - 1][0].down + 1;
//		else
//			rec[i][0].down = rec[i - 1][0].down;
//		if (i == n - 1 || arr[i + 1][0] == 'b')
//			rec[i][0].right = rec[i][0].down;
//		else
//			rec[i][0].right = rec[i][0].down + 1;
//	}
//
//	for (int j = 1; j < m; ++j)
//	{
//		if (arr[0][j] == 'b')
//		{
//			rec[0][j].right = rec[0][j - 1].right + 1;
//		}
//		else
//			rec[0][j].right = rec[0][j - 1].right;
//		if (j == m - 1 || arr[0][j + 1] == 'b')
//			rec[0][j].down = rec[0][j].right;
//		else
//			rec[0][j].down = rec[0][j].right + 1;
//	}
//
//	for (int i = 1; i < n; ++i)
//	{
//		for (int j = 1; j < m; ++j)
//		{
//			int right1, right2, down1, down2;
//			if (arr[i][j] == 'b')
//			{
//				right1 = rec[i][j - 1].right + 1;
//				down1 = rec[i - 1][j].down + 1;
//			}
//			else
//			{
//				right1 = rec[i][j - 1].right;
//				down1 = rec[i - 1][j].down;
//			}
//			if (i == n - 1 || arr[i + 1][j] == 'b')
//				right2 = down1;
//			else
//				right2 = down1 + 1;
//			if (j == m - 1 || arr[i][j + 1] == 'b')
//				down2 = right1;
//			else
//				down2 = right1 + 1;
//			rec[i][j].down = min(down1, down2);
//			rec[i][j].right = min(right1, right2);
//
//		}
//		
//	}
//	return min(rec[n - 1][m - 1].right, rec[n - 1][m - 1].down);
//
//}
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<vector<char> >arr(n, vector<char>(m));
//	for (int i = 0; i < n; ++i)
//	{
//		for (int j = 0; j < m; ++j)
//		{
//			char temp;
//			cin >> temp;
//			arr[i][j] = temp;
//		}
//	}
//	int res = findMin(arr);
//	cout << res << endl;
//	return 0;
//}