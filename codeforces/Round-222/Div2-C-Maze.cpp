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
int const MAXN=501;
char g[MAXN][MAXN];
int dx[]={-1,1,0,0};
int dy[]={0,0,1,-1};

int n,m;
void dfs(int i,int j,int *k){
	if((*k)<=0)return;
	g[i][j]='&';
	REP(u,4)if(i+dx[u]>=0&&i+dx[u]<n&&j+dy[u]>=0&&j+dy[u]<m&&g[i+dx[u]][j+dy[u]]=='.')
		{
			(*k)--;
			dfs(i+dx[u],j+dy[u],k);

	}


}

int main() {
    syn;
    int k;
    cin >> n >> m>>k;
    int count=0;
    REP(i,n)REP(j,m){cin >> g[i][j];count+=(g[i][j]=='.'?1:0);}
    int flag=0;
    REP(i,n){REP(j,m)if(g[i][j]=='.'){
	    
	    k=count-k;
	    dfs(i,j,&k);
	    flag=1;
	    break;
    }
    if(flag)break;}
    REP(i,n){
	    REP(j,m){
		    if(g[i][j]=='&')cout <<'.';
		    else if(g[i][j]=='.')cout << 'X';
		    else cout << '#';
	    }
	    cout<<'\n';
    }
    return 0;
}


