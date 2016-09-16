//#include <iostream>
//#include <fstream>
//#include <algorithm>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int a, b;
//	ifstream in("A-large-practice.in");
//	if (!in.is_open())
//		abort();
//	int num;
//	in >> num;
//	ofstream out("res.out");
//	int count = 1;
//	while (num--)
//	{
//		in >> a >> b;
//		int valid = min(a, b);
//		long long res = (valid + 1 ) * 1LL * valid / 2;
//		string ret = "Case #" + to_string(count) + ": " + to_string(res);
//		out << ret;
//		out << endl;
//		count++;
//	}
//	return 0;
//
//}