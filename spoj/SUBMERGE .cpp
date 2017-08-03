//@author-razor123 
#include <cmath>
#include <cstdio>
#include <vector>
#include<cstring>
#include <iostream>
#include <algorithm>
#include <queue>
#include <sstream>
#include <climits>
using namespace std;
typedef  unsigned long long ULL;
typedef pair<int,int> PI; 
typedef pair<int,PI> IPI ;
typedef pair<PI,int> PII;
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
int const MAXN=10005;
vector<vector<int>>g(MAXN);
bool vis[MAXN],art[MAXN];
int low[MAXN],disc[MAXN],parent[MAXN];
int n,m,tm;
void reset(){
    REP(i,n+1){
        g[i].clear();
        vis[i]=false,art[i]=false,low[i]=INF,parent[i]=-1;
    }
}
void dfs(int u){
    vis[u]=true;
    disc[u]=low[u]=++tm;
    int child=0;
    REP(i,g[u].size()){
        int v=g[u][i];
        if(!vis[v]){
            child++;
            parent[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(parent[u]==-1&&child>1){
                art[u]=true;
            }
            else if(parent[u]!=-1&&low[v]>=disc[u]){
                art[u]=true;
            }
        }
        else if(parent[u]!=v){//shouldn't be the immediate parent
            low[u]=min(low[u],disc[v]);
        }
    }
}
int main(){
    syn;
    while(cin >> n>>m,n!=0){
        reset();
        REP(i,m){
            int u,v;
            cin >> u >> v;
            g[u].PB(v);
            g[v].PB(u);
        }
        FOR(i,1,n){
            if(!vis[i]){
                tm=0;
                dfs(i);
            }
        }
        int ans=0;
        FOR(i,1,n)ans+=art[i];
        cout <<ans<<'\n';
    }
}

    

