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
int dis[9][9];
int dx[]={-2,-2,-1,-1,1,1,2,2},dy[]={-1,1,-2,2,2,-2,1,-1};
void bfs(int sx,int sy,int x,int y){
	queue<PI>q;
	dis[sx][sy]=0;
	q.push(MP(sx,sy));
	if(sx==x&&sy==y)return;
	while(!q.empty()){
		PI u=q.front();
		q.pop();
		int ux=u.F,uy=u.S;
		if(ux==x&&uy==y)break;
		REP(i,8){
			int vx=ux+dx[i],vy=uy+dy[i];
			if(vx>=1&&vx<=8&&vy>=1&&vy<=8&&dis[vx][vy]==-1){
				dis[vx][vy]=dis[ux][uy]+1;
				q.push(MP(vx,vy));
			}
		}
	}
}
int main() {
    syn;
    int t;
    cin >> t;
    while(t--){
	    string s,d;cin >> s>> d;
	    int ux,uy,vx,vy;
	    uy=s[0]-'a'+1,ux=s[1]-'0',vy=d[0]-'a'+1,vx=d[1]-'0';
            mem(dis,-1);
	    bfs(ux,uy,vx,vy);
	    
	    cout << dis[vx][vy]<<'\n';
    }
     
    return 0;
}


