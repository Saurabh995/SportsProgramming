// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cmath>
#include<cstring>
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
int const MAXN=110;
int mark[MAXN];
int x[MAXN],y[MAXN];
int n;
void dfs(int i){
    mark[i]=1;
    REP(j,n){
        if(!mark[j]&&(x[i]==x[j]||y[i]==y[j]))dfs(j);
    }
}
int main(){
    syn;
    // #ifndef ONLINE_JUDGE
    // // for getting input from input.txt
    // // freopen("input.txt", "r", stdin);
    // // // for writing output to output.txt
    // // freopen("output.txt", "w", stdout);
    // #endif
    cin >>n;
    REP(i,n)cin>>x[i]>>y[i];
    mem(mark,0);
    
    int cnt=0;
    REP(i,n){
        if(!mark[i]){
            dfs(i);cnt++;
        }
    }
    cout <<(cnt-1);
}
