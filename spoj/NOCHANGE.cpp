// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cmath>
#include<queue>
#include<list>
#include<sstream>
#include<cstring>
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
int const MAXN=100010;
bool dp[MAXN];
int a[MAXN];

int main() {
    syn;
    int x,k;
    cin >> x>>k;
    REP(i,k){
	    cin >>a[i]; 
	    if(i>0)a[i]+=a[i-1];
    }
    mem(dp,0);
    dp[0]=1;
    REP(i,k){
	    FOR(j,a[i],x){
		    dp[j]|=dp[j-a[i]];
	    }
    }
    if(dp[x])cout << "YES";
    else cout << "NO";
    return 0;
}


