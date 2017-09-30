// @author- razor123
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <cmath>
#include <queue>
#include <list>
#include <sstream>
#include <algorithm>
using namespace std;
typedef long long ULL;
typedef pair<int, int> PI;
typedef pair<int, PI> PPI;
#define mem(a, n) memset((a), (n), sizeof(a))
#define FOR(x, b, e) for (int x = b; x <= (e); ++x)
#define FORD(x, b, e) for (int x = b; x >= (e); --x)
#define REP(x, n) for (int x = 0; x < (n); ++x)
#define VAR(v, n) __typeof(n) v = (n)
#define ALL(c) c.begin(), c.end()
#define SIZE(x) (int)x.size()
#define FOREACH(i, c) for (VAR(i, (c).begin()); i != (c).end(); ++i)
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define INF INT_MAX
#define NINF INT_MIN
#define ison(x, i) (((x) >> (i)) & 1)
#define syn (ios::sync_with_stdio(false))
int const MOD = 10000007;
ULL n, k;
ULL getPow(ULL a, ULL b)
{
    ULL pw = 1;
    while (b)
    {
        if (b & 1)
            pw = (pw*a )% MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return pw % MOD;
}
int main()
{
    #ifndef ONLINE_JUDGE
        // for getting input from input.txt
        freopen("input.txt", "r", stdin);
        // for writing output to output.txt
        freopen("output.txt", "w", stdout);
    #endif
    scanf("%lld %lld", &n, &k);
    while (n && k)
    {
        ULL sum = 0;
        sum = getPow(n, n) + getPow(n, k) + 2 * getPow(n - 1, k) + 2 * getPow(n - 1, n - 1);
        sum %= MOD;
        printf("%lld\n", sum);
        scanf("%lld %lld", &n, &k);
    }
}
