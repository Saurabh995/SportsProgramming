//@author-razor123 
#include<iostream>
#include<string>
#include <cstring>
#include<queue>
#include<vector>
#include<climits>
#include <algorithm>
#include <map>
#include <stack>
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
int const MAXN=3010;
vector<vector<int>> g(MAXN);
bool vis[MAXN];
int low[MAXN];
int disc[MAXN];
int parent[MAXN];
bool art[MAXN];
int numart;
int n,m,t,test,k;
void reset(){
    REP(i,n){g[i].clear();low[i]=INF;vis[i]=false;parent[i]=-1;art[i]=0;}
    numart=0;
}
void dfs(int u){
    vis[u]=true;
    int child=0;
    low[u]=disc[u]=++t;
    REP(i,g[u].size()){
        int v=g[u][i];
        if(!vis[g[u][i]]){
            child++;parent[v]=u;
            dfs(g[u][i]);
            low[u]=min(low[u],low[v]);
            if(parent[u]==-1&&child>1){
                art[u]=true;
            }
            else if(parent[u]!=-1&&low[v]>=disc[u]){
                   art[u]=true;
            }
            
        }
        else if(parent[u]!=v){
            low[u]=min(low[u], [v]);
        }
    }
}
int main(){
    syn;
    cin >> test;
    while(test--){
        cin >> n>>m>>k;
        reset();
        REP(i,m){
            int u,v;
            cin >> u >> v;
            g[u].PB(v);
            g[v].PB(u);
        }
        REP(i,n){
            if(!vis[i]){
                t=0;
                dfs(i);
            }
        }
        int ans=0;
        REP(i,n)ans+=art[i];
        cout << (ans*k)<<"\n";
        
    }
}