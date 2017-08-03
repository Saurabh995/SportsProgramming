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
int const MAXN=100010;
ULL a[MAXN];
ULL s[MAXN];
ULL euclid(ULL a,ULL b){
	if(a==0)return b;
	else return euclid(b%a,a);
}

int main() {
    syn;
    int n;
    cin >> n;
    REP(i,n)cin >>a[i];
    ULL left=0,right=0;
    sort(a,a+n);
    REP(i,n){
	    right+=(i)*a[i]-left;
	    left+=a[i];
    }

    ULL fac=euclid((ULL)n,(left+2*right));
    cout <<(left+2*right)/fac<<" "<<n/fac; 


    return 0;
}


