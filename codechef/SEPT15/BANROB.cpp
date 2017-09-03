
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
int const MAXN = 500010;
double amt = 1000000000.0;
int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    int t;
    syn;
    cin >> t;
    while (t--)
    {
        ULL m;
        double p, ans = 1, i,p1;
        cin >> m >> p;
        p*=-1;
        p1=p;
        while (m)
        {
            if (m & 1)
                ans = ans * p;
            p = p * p;
            m >>= 1;
        }
        // cout << ans<<endl;
        ans=((1-ans)*amt)/(1-p1);
        printf("%lf %lf\n",ans,(amt-ans));
    }
    return 0;
}

