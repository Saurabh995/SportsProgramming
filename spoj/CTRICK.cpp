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
#include<cstring>
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
int const MAXN=200010;
int a[MAXN];

int main() {
    syn;
    int t;
    cin >>t;
    while(t--){
	    int n;
	    cin >> n;
	    mem(a,-1);
	    int curr=1,pos=0,sl=n;
	    while(curr<=n){
		    int r=curr%sl+1,i,cnt;
		    for(i=pos,cnt=0;;i++){
			    if(i>=n)i=0;
			    if(a[i]==-1)cnt++;
			    if(cnt==r)break;
		    }
		    a[i]=curr++,sl--,pos=i;
	    } 
	    REP(i,n)cout << a[i]<<' ';
	    cout << '\n';
    }
    return 0;
}


