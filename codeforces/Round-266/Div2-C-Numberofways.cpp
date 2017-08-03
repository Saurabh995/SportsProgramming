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
int const MAXN=500010;
ULL a[MAXN],s[MAXN];
int main() {
    syn;
    int n;
    cin >> n;
    ULL sm=0,c=0;
    REP(i,n){cin >> a[i];sm+=a[i];}
    c=0;
    if(sm%3){cout << 0;return 0;}
    if(a[n-1]==sm/3){s[n-1]=1;}c+=a[n-1];
    FORD(i,n-2,0){c+=a[i];s[i]=0;if(c==sm/3)s[i]=1;s[i]+=s[i+1];}
    ULL ans=0;
    c=0;
    FOR(i,0,n-3){	    
	    c+=a[i];
	    if(c==sm/3){
		    ans+=s[i+2];
	    }
    }
    cout << ans;


    return 0;
}


