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
int dx[]={-1,0,0,1},dy[]={0,1,-1,0};
int const MAXN=1010;
char g[MAXN][MAXN];int dis[MAXN][MAXN];
int n,m;
void bfs(int x,int y){
	deque<PI> q;
	q.push_front(MP(x,y));
	dis[x][y]=0;
	while(!q.empty()){
		PI u=q.front();
		int ux=u.F,uy=u.S;
		q.pop_front();
		REP(i,4){
			int vx=ux+dx[i],vy=uy+dy[i];
			if(vx>=0&&vx<n&&vy>=0&&vy<m){
				int p=(g[ux][uy]==g[vx][vy])?0:1;
				if(dis[ux][uy]+p<dis[vx][vy]){
					dis[vx][vy]=dis[ux][uy]+p;
					if(p)q.push_back(MP(vx,vy));else q.push_front(MP(vx,vy));
				}
			}
		}
		
	}
}
int main() {
    syn;
    int t;
    cin >> t;
    while(t--){
	cin >> n >> m;
	REP(i,n)REP(j,m)cin >> g[i][j];	
	REP(i,n)REP(j,m)dis[i][j]=INF;
	bfs(0,0);
	cout << dis[n-1][m-1]<<'\n';

    }
    return 0;
}


