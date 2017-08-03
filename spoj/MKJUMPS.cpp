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
int mark[11][11];
int inp[11][2];
int dx[]={-2,-2,-1,-1,1,1,2,2},dy[]={1,-1,2,-2,2,-2,-1,1};
int n,ans=INT_MIN;
void dfs(int x,int y,int len){
	mark[x][y]=1;
	bool e=0;
	REP(i,8){
		int vx=x+dx[i],vy=y+dy[i];
		if(vx>=0&&vx<n&&vy>=inp[vx][0]&&vy<inp[vx][1]+inp[vx][0]&&!mark[vx][vy]){
			e=1;

			dfs(vx,vy,len+1);
		}
	}
	if(!e){
		ans=max(len,ans);

	}
	mark[x][y]=0;



}
int main() {
    syn;
    int t;
    t=1;
    while(cin >>n,n!=0){
	    int k=0;
	    REP(i,n){cin >>inp[i][0]>>inp[i][1];k+=inp[i][1];}
	    mem(mark,0);
	    dfs(0,inp[0][0],1);
	    
	    int c=k-ans;
	    ans=INT_MIN;
	    if(c!=1)printf("Case %d, %d squares can not be reached.\n",t,c);

             else printf("Case %d, %d square can not be reached.\n",t,c);
	     t++;
    }
    
    return 0;
}


