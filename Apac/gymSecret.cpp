#include <iostream>
#include <fstream>
#include <string>


using namespace std;


const long long mod = pow(10, 9) + 7;
const int maxn = 200000;
int nums[maxn];
int powRes[maxn];

int pow_mod(int a, int m, int mod)
{
 	int ress = 1 % mod;
	while (m)
	{
		if (m & 1)
			ress = (long long)ress * a % mod;
		a = (long long)a * a % mod;
		m >>= 1;
	}
	return ress;
}

long long process(int a, int b, int n, int k)
{
	long long res = 0;
	for (int i = 1; i <= n; ++i)
	{
		long long  numa = pow_mod(i, a, k);
		for (int j = 1; j <= n; ++j)
		{
			if (i == j) 
				continue;
			long long numb = pow_mod(j, b, k);
			long long sum = numa + numb;
			if (sum % k)
				continue;
			else
				res = (res + 1) % mod;
		} 

	}
	res = res % mod;
	return res;
}

int process2(int a, int b, long long n, int k)
{
	int res = 0;
	for (int i = 0; i < k; ++i)
	{
		int powAns = pow_mod(i, a, k);
		powRes[i] = powAns;
		nums[powAns] = (nums[powAns] + n / k + (i&&n % k >= i)) % mod;
		
	}
	for (int i = 0; i < k; ++i)
	{
		int powAns = pow_mod(i, b, k);
		long long countsB = (n / k + (i && n % k >= i)) % mod;
		long long curRes = countsB * ((k - powAns) % k == powRes[i] ? nums[(k - powAns) % k] - 1 : nums[(k - powAns)%k]) % mod;
		curRes = (curRes % mod + mod) % mod;
		res = (res + curRes) % mod;

	}
	return res;

	
}

int main()
{
	/*ifstream in("B-small-practice.in");
	ofstream out("B-small.out");*/

	ifstream in("B-large-practice.in");
	ofstream out("B-large.out");

	int cases;
	in >> cases;
	int a, b, k;
	long long n;
	int count = 1;
	while (cases--)
	{
		memset(nums, 0, sizeof nums);
		in >> a >> b >> n >> k;
		int res = process2(a, b, n, k);
		string ret = "Case #" + to_string(count) + ": " + to_string(res);
		out << ret << endl;
		count++;
	}
	return 0;

}