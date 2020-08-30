#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <cstring>
#include <cstdio>
#include <stack>
#include <string.h>
#include <queue>
#include <iomanip>
#include <math.h>
#include <utility>
#include <sstream>
#include <cstdlib>
#include <fstream>
#include <climits>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define SQ(a) (a) * (a)
//compara se numero flutuantes sao iguais if(abs(a-b) < 1e-9)   a e b sao iguais...
using namespace std;

typedef long long int ll;

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n;

	cin>>n;
	cout << n <<" ";
	while (n > 1)
	{
		if (n % 2 == 0) n = n/2;
		else n = 3 * n + 1;
		cout<<n<<" ";
	}

	return 0;
}
