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
int a[10];

int main() {
    syn;
    int v;cin >> v;
    cin >> a[1];
    int mi=1;
    FOR(i,2,9){
	    cin >> a[i];
	    if(a[i]<=a[mi]){
		    mi=i;

	    }
    }
    int q=v/a[mi],r=v%a[mi];
    if(a[mi]>v){cout << -1;return 0;}
    REP(i,q){
	    FORD(j,9,mi){
		    if(r+a[mi]>=a[j]){
			    cout << j;r-=a[j]-a[mi];break;
		    }
	    }
    }

    return 0;

}


