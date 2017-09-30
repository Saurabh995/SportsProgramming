// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstring>
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
int const MAXN=52;
int dx[]={-1,0,0,1};
int dy[]={0,1,-1,0};
char g[MAXN][MAXN];
int mark[MAXN][MAXN];
int n,m;
bool dfs(int ux,int uy,int px,int py){
    mark[ux][uy] = 1;
    REP(i, 4)
    {
        int vx = ux + dx[i], vy = uy + dy[i];
        if (vx >= 0 && vx < n && vy >= 0 && vy < m && g[ux][uy] == g[vx][vy])
        {
           if(!mark[vx][vy]){
               if (dfs(vx, vy, ux, uy))
                   return true;
           }
           else if(!(vx==px&&vy==py)){
               return true;}

        }
    }
    return false;

} 
int main(){
    syn;
    #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
    #endif
    cin >> n >>m;
    REP(i,n){REP(j,m){cin >>g[i][j];}}
    mem(mark,0); 
    bool ans=0;
    REP(i,n){
        REP(j,m){
            if(!mark[i][j])ans=dfs(i,j,-1,-1);
            if(ans)break;
        }
        if(ans)break;
    }
    cout <<(ans==1?"Yes":"No");


}