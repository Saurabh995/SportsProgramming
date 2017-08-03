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
int const MAXN=100010;
vector<int>g[MAXN];
bool mark[MAXN];
int n,m;
void dfs(int u){
	mark[u]=1;
	REP(i,g[u].size()){
		if(!mark[g[u][i]]){
			dfs(g[u][i]);
		}
	}
}
int main() {
    syn;
    int t;
    cin >> t;
    while(t--){
	    int n,m;cin >>n>>m;
	    REP(i,n)g[i].clear();
	    
	    REP(i,m){
		    int u,v;
		    cin >> u >> v;
		    g[u].PB(v);g[v].PB(u);
	    }
	    int c=0;
	    mem(mark,0);
	    REP(i,n){
		    if(!mark[i]){
			    dfs(i);
			    c++;
		    }
	    }
	    cout <<c<<'\n';
    }

    return 0;
}


