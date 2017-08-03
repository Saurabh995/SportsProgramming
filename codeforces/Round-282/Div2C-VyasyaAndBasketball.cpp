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
struct mycompare{
	bool operator()(PI a,PI b){
		return a.F<b.F;
	}
};

int main() {
    syn;
    vector<PI> a;
    int n,m;
    cin >> n;
    REP(i,n){
	    int p;
	    cin >>p;
	    a.PB(MP(p,1));
    }
    cin >> m;
    REP(i,m){
	    int p;cin >> p;
	    a.PB(MP(p,2));
    }
    sort(a.begin(),a.end());
    ULL ans=(ULL)(n*3-m*3);
    ULL p=ans;
    ULL k1=3*n,k2=3*m,t1=3*n,t2=3*m;
    FOR(i,0,n+m-1){
	   if(a[i].S==1){t1--;p--;} 
	   else{t2--;p++;}
	   if(p>ans){ans=p;k1=t1,k2=t2;}
    }
    cout <<k1<<":"<<k2;
    return 0;
}


