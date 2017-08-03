// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cstring>
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
int const MAXN=110;
int dp[MAXN][MAXN][2];

int solve(int x,int y,int z){
	if(y>x){dp[x][y][z]=0;return 0;}
	if(!x)return 0;
	if(x==1){
		if(!y)return 1;
		else return 0;

	}
	if(dp[x][y][z]!=-1)return dp[x][y][z];
	if(z)dp[x][y][z]=solve(x-1,y-1,1)+solve(x-1,y,0);
	else dp[x][y][z]=solve(x-1,y,0)+solve(x-1,y,1);
	return dp[x][y][z];
}
int main() {
    syn;
    int t,i,n,k;
    cin >> t;
    FOR(i,1,t){
	    cin >> i >> n >> k;
	    mem(dp,-1);
	    cout << (i)<<" "<<(solve(n,k,0)+solve(n,k,1))<<'\n';

    }
    return 0;
}


