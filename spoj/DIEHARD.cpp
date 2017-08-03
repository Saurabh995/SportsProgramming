// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<climits>
#include<vector>
#include<cmath>
#include<queue>
#include<list>
#include<sstream>
#include<algorithm>
using namespace std;
typedef  long long ULL;
typedef pair<int,int> PI; 
typedef pair<int,PI> PPI ;  
#define mem(a,n) memset((a), (n), sizeof(a))
#define FOR(x, b, e) for(int x=b; x<=(e); ++x)
#define FORD(x, b, e) for(int x=b; x>=(e); --x)
#define REP(x, n) for(int x=0; x<(n); ++x)
#define VAR(v,n) __typeof(n) v=(n)
#define ALL(c) c.begin(),c.end()
#define SIZE(x) (int)x.size()
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
#define PB push_back
#define F first
#define S second
#define MP make_pair
#define INF INT_MAX
#define NINF INT_MIN
#define ison(x, i) (((x)>>(i))&1)
#define syn (ios::sync_with_stdio(false))
int const MAXN=1010;
int dp[MAXN][MAXN][3];
int solve(int h,int a, int i){
	if(h<=0||a<=0)return 0;
	if(dp[h][a][i]!=-1)return dp[h][a][i];
	if(i==0||i==1) dp[h][a][i]=1+solve(h+3,a+2,2);
	else dp[h][a][i]=1+max(solve(h-20,a+5,1),solve(h-5,a-10,0));
	return dp[h][a][i];
}
int main() {
    syn;
    int t;
    cin >> t;
    while(t--){
	    int h,a;
	    cin >> h >> a;
	    mem(dp,-1);
	    cout << max(solve(h,a,0),max(solve(h,a,1),solve(h,a,2)))-1;
	    cout <<'\n';

    }
    return 0;
}


