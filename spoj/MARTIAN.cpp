// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
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
int const MAXN=503;
int hs[MAXN][MAXN],vs[MAXN][MAXN],dp[MAXN][MAXN];

int main() {
    syn;
    int n,m;
    while(cin >> n >> m,n!=0){
	    REP(i,n)REP(j,m)cin>> vs[i][j];
	    REP(i,n)REP(j,m)cin >> hs[i][j];
	    REP(i,n){
		    REP(j,m){
			    int t1=hs[i][j];
			    if(i>0)t1+=hs[i-1][j],hs[i][j]+=hs[i-1][j];
			    int t2=vs[i][j];
			    if(j>0)t2+=vs[i][j-1],vs[i][j]+=vs[i][j-1];
			    if(i>0){
				    t2+=dp[i-1][j];
			    }
			    if(j>0)t1+=dp[i][j-1];
			    dp[i][j]=max(t1,t2);

		    }
	    }
	    cout << dp[n-1][m-1]<<'\n';
    }
    return 0;
}


