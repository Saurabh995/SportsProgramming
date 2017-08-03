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
int const MAXN=185;
int g[MAXN][MAXN];
int  vis[MAXN][MAXN];
int n,m;
queue<PI> q;
int dx[]={-1,0,0,1},dy[]={0,-1,1,0};
void dis(){
	while(!q.empty()){
		q.pop();
	}
	REP(i,n){REP(j,m){
		if(g[i][j]){
			vis[i][j]=0;
			q.push(MP(i,j));
		}
		else vis[i][j]=-1;
	}}
	
	

	while(!q.empty()){
		PI u=q.front();
		int ux=u.F,uy=u.S;
		q.pop();
				REP(i,4){
			int vx=ux+dx[i],vy=uy+dy[i];
			if(vx>=0&&vx<n&&vy>=0&&vy<=m&&vis[vx][vy]==-1){
				vis[vx][vy]=vis[ux][uy]+1;
				q.push(MP(vx,vy));
			}
			}
		}

}


int main() {
    syn;
    int t;cin >> t;
    while(t--){
	    cin >> n >> m;
	    string s;
	    REP(i,n){
		    cin >> s;
		    REP(j,m)g[i][j]=s[j]-'0';}
	    

		    dis();
		    REP(i,n){
			    REP(j,m){
				    cout << vis[i][j]<<' ';
			    }
			    cout << '\n';
		    }
    }
    return 0;
}


