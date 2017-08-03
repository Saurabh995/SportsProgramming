// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
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
int const MAXN=1501;
void dfs(vector<vector<int>>&g,vector<int> &mark,int i ){
	mark[i]=1;
	REP(j,g[i].size()){
		if(!mark[g[i][j]]){
			dfs(g,mark,g[i][j]);
		}
	}
}

int main() {
    syn;
    int n;
    cin >> n;
    vector<vector<int>> g(101);
    vector<PI> V;
    vector<int>mark(101);
    int k=0;
    while(n--){
	    int u,v,c;
	    cin >> c >> u >> v;
	    if(c==1){
		    k ++;
		    
		    V.push_back(MP(u,v));
		    REP(i,k-1){
			    if((V[i].F<u&&V[i].S>u)||(V[i].F<v&&V[i].S>v))
				    g[k-1].PB(i);
			    if((u<V[i].F&&v>V[i].F)||(u<V[i].S&&v>V[i].S))
				    g[i].PB(k-1);
			    }
		    

		    
	    }
	    else{
		    REP(i,k){mark[i]=0;}
		    dfs(g,mark,u-1);
		    if(mark[v-1])cout << "YES"<<'\n';
		    else cout << "NO"<<'\n';
	    }

    }
    return 0;
}


