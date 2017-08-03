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
int const MAXN=1501;
int dis[110][110][3];
int dx[]={-1,0,0,1},dy[]={0,-1,1,0};
int n,m;
void bfs(int x,int y,int ch){
	queue<PI> q;
	q.push(MP(x,y));
	dis[x][y][ch]=0;
	while(!q.empty()){
		PI u=q.front();
		int ux=u.F,uy=u.S;
		q.pop();
		REP(i,4){
			int vx=ux+dx[i],vy=uy+dy[i];
			if(vx>=1&&vx<=n&&vy>=1&&vy<=m&&dis[vx][vy][ch]==-1){
				dis[vx][vy][ch]=dis[ux][uy][ch]+1;
				q.push(MP(vx,vy));
			}
		}
	}
	
}
int main() {
    syn;
    cin >> n>>m;
    int t;cin >>t;
    while(t--){
	    int xm,ym,xc1,xc2,yc1,yc2;
	    cin >> xm>>ym>>xc1>>yc1>>xc2>>yc2;
	    mem(dis,-1);
	    bfs(xm,ym,0);
	    bfs(xc1,yc1,1);
	    bfs(xc2,yc2,2);
	    int f=0;
	    FOR(i,1,n){
		    if(dis[i][1][0]<dis[i][1][1]&&dis[i][1][0]<dis[i][1][2]){f=1;break;}
		    if(dis[i][m][0]<dis[i][m][1]&&dis[i][m][0]<dis[i][m][2]){f=1;break;}
	    }
	    if(f){cout <<"YES\n";continue;}
	    FOR(i,1,m){
		    if(dis[1][i][0]<dis[1][i][1]&&dis[1][i][0]<dis[1][i][2]){f=1;break;}
		    if(dis[n][i][0]<dis[n][i][1]&&dis[n][i][0]<dis[n][i][2]){f=1;break;}
	    }
	    if(f){cout <<"YES\n";continue;}
	    else cout <<"NO\n";
    }
    return 0;
}


