//#pragma comment(linker,"/STACK:102400000,102400000")
//#include<stdio.h>
//#include<iostream>
//#include <fstream>
//#include<string.h>
//#include<math.h>
//#include<algorithm>
//#include<vector>
//#include<map>
//#include<set>
//#include<queue>
//#include<string>
//#include<time.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<list>
//#include<iomanip>
//#include<ext/rope>
//#define PB push_back
//#define MP make_pair
//#define PF push_front
//#define lson k<<1
//#define rson k<<1|1
//using namespace std;
//typedef long long ll;
//typedef double db;
//typedef long double ldb;
//
//const int N = 25;
//
//char mp[N][N];
//int mk[N][N];
//int ch[][2] = { { 1,0 },{ -1,0 },{ 0,1 },{ 0,-1 } };
//db res;
//int r, c;
//db p, q;
//
//bool check(int x, int y)
//{
//	return x >= 0 && y >= 0 && x<r&&y<c;
//}
//
//void dfs(int rs, int cs, int s, db n)
//{
//	if (s == 0)
//	{
//		res = max(res, n);
//		return;
//	}
//	for (int i = 0; i<4; i++)
//	{
//		int x = rs + ch[i][0], y = cs + ch[i][1];
//		if (check(x, y))
//		{
//			db t = mp[x][y] == 'A' ? p : q;
//			db tmp = pow(1.0 - t, mk[x][y]);
//			mk[x][y]++;
//			dfs(x, y, s - 1, n + tmp*t);
//			mk[x][y]--;
//		}
//	}
//}
//
//int main()
//{
//#ifdef PKWV
//	freopen("A-small-practice2.in", "r", stdin);
//	freopen("A-small2.out", "w", stdout);
//#endif // PKWV
//	ifstream in("A-small-practice2.in");
//	ofstream out("A-small2.out");
//	int T;
//	scanf("%d", &T)
//	in >> T;
//	for (int cas = 1; cas <= T; cas++)
//	{
//		int rs, cs, s;
//		scanf("%d%d%d%d%d", &r, &c, &rs, &cs, &s);
//		scanf("%lf%lf", &p, &q);
//		        printf("%d  %d==\n",r,c);
//		in >> r >> c >> rs >> cs >> s;
//		in >> p >> q;
//		cout << setiosflags(ios::fixed) <<  setprecision(10) << p << endl;
//		for (int i = 0; i<r; i++)
//		{
//			for (int j = 0; j<c; j++)
//			{
//				char t;
//				scanf("%s", t);
//				in >> t;
//				mp[i][j] = t;
//			}
//		}
//		memset(mk, 0, sizeof(mk));
//		res = 0.0;
//		dfs(rs, cs, s, 0);
//		printf("Case #%d: %.8f\n", cas, res);
//		out << "Case #" << cas << ": " << setiosflags(ios::fixed) << setprecision(7) << res << endl;
//	}
//	return 0;
//}
