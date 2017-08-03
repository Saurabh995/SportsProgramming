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
int const MAXN=1000010;
int dp[MAXN];
int k,l;
int  solve(int n, bool i){
	if(n<=0)return 1;
	if(dp[n]!=-1)return !dp[n];
	dp[n]=0;
	dp[n]|=solve(n-1,!i);
	if(n>=k)dp[n]|=solve(n-k,!i);
	if(n>=l)dp[n]|=solve(n-l,!i);
	return !dp[n];

}

int main() {
    syn;
    int m;
    cin >> k >> l >>m;
    mem(dp,-1);
    string ans="";
    while(m--){
	    int n;
	    cin >> n;
	    
	    if(!solve(n,0))ans+='A';
	    else ans+='B';
    }
    cout <<ans;

    return 0;
}


