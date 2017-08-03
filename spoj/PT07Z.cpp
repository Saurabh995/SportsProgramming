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
int const MAXN=10010;
vector<int> g[MAXN];
bool vis[MAXN];
int mxlen=INT_MIN,mxn;
void dfs(int u,int len){
	vis[u]=1;
	REP(i,g[u].size()){
		int v=g[u][i];
		if(!vis[v]){
			
			dfs(v,len+1);
		}
	}
	if(len>mxlen){
		mxlen=len,mxn=u;
	}
}

int main() {
    syn;
    int n;
    cin >> n;
    REP(i,n-1){
	    int u,v;cin >>u>>v;
	    g[u].PB(v),g[v].PB(u);
    }
    mem(vis,0);
    dfs(1,0);
    
    mxlen=INT_MIN;
    mem(vis,0);
    dfs(mxn,0);
    cout << mxlen;
    return 0;
}


