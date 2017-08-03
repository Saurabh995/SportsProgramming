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
int const MAXN=2001;
int a[MAXN];

int main() {
    syn;
    ULL n;
    while(cin >> n,n!=0){
	    REP(i,n)cin >> a[i];
	    sort(a,a+n);
	    ULL sum=0,ans;
	    for(int i=0;i<n-2;i++){
		    for(int j=i+1,k=i+2;j<n-1;j++){
			    while(k<n&&a[i]+a[j]>=a[k])k++;
			    sum+=(k-1-j);
		    }
	    }
	    ans=(n*(n-1)*(n-2))/6-sum;
	    cout << ans<<'\n';

    }
    return 0;
}
