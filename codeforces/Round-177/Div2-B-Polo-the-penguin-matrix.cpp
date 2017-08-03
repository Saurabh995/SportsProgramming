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
int const MAXN=1501;
int a[101*101];
int main() {
    syn;
    int n,m,d;
    cin >>n >> m >>d;
    int f=-1;
    REP(i,m*n){
	    cin >> a[i];
	    if(f==-1)f=a[i]%d;
	    else {
		    if(f!=a[i]%d){
			    f=-1;
			    break;
		    }
	    }
    }
    if(f==-1)cout <<-1;
    else{
	    int ans=0;
	    sort(a,a+(m*n));
	    REP(i,m*n){
		    ans+=abs(a[i]-a[m*n/2])/d;
	    } 
	    cout << ans;
    }
    
    return 0;
}


