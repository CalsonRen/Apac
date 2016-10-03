//#pragma once
//
//#include <iostream>
//#include <vector>
//#include <fstream>
//#include <iomanip>
//#include <algorithm>
//using namespace std;
//const int action[][2] = { {1, 0}, {-1, 0}, {0, 1}, {0 , -1} };
//
//bool isValid(int x, int y, int rows, int cols)
//{
//	return x >= 0 && y >= 0 && x < rows && y < cols;
//}
//
//void solve(int rs, int cs, int step, const vector<vector<char> >&arr, double& res, double tempres, const double p, const double q, vector<vector<int> >&aux)
//{
//	if (step == 0)
//	{
//		res = max(res, tempres);  
//		return;
//	}
//	for(int i = 0; i < 4; ++i)
//	{
//		int x = rs + action[i][0];
//		int y = cs + action[i][1];
//		if (isValid(x, y, arr.size(), arr[0].size()))
//		{
//			double temp = arr[x][y] == 'A' ? p : q;
//			double pro = pow(1.0 - temp, aux[x][y]);
//			aux[x][y]++;
//			//tempres += pro * temp;
//			solve(x, y, step - 1, arr, res, tempres + pro * temp, p, q, aux);
//			aux[x][y]--;
//		}
//	}
//}
//int main()
//{
//	ifstream in("A-large-practice.in");
//	ofstream out("A-large.out");
//
//	double test;
//	//cin >> test;
//	//cout << test << endl;
//	int cases;
//	in >> cases;
//	int  count = 1;
//	for (int i = 0; i < cases; ++i)
//	{
//		int rows, cols, rs, cs, step;
//		in >> rows >> cols >> rs >> cs >> step;
//		double p, q;
//		in >> p >> q;
//		//cout << setiosflags(ios::fixed) << setprecision(10) << p << endl;
//		vector<vector<char> >arr(rows, vector<char>(cols,'.'));
//		for (int i = 0; i < rows; ++i)
//		{
//			for (int j = 0; j < cols; ++j)
//			{
//				char temp;
//				in >> temp;
//				arr[i][j] = temp;
//
//			}
//		}
//		double res = 0.0;
//		vector<vector<int> >aux(rows, vector<int>(cols, 0));
//		solve(rs, cs, step, arr, res, 0, p, q, aux);
//		//out << setiosflags(ios::fixed);
//		out << "Case #" << count << ": ";
//		out << setiosflags(ios::fixed) << setprecision(7) << res << endl;
//		count++;
//	}
//}