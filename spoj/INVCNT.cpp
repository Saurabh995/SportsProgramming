// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
#include<cmath>
#include<queue>
#include<cstring>
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
int const MAXN=10000010;
ULL tree[MAXN];

void update(ULL num,ULL pos){
	for(;pos<=MAXN;pos+=(pos)&(-pos))tree[pos]+=num;
}
ULL query(ULL pos){
	ULL sum=0;
	for(;pos>0;pos-=(pos&(-pos)))sum+=tree[pos];
	return sum;
}
int main() {
    syn;
    int t;
    cin >>t;
    while(t--){
	    mem(tree,0);
	    int n;
	    cin >> n;ULL num,ans=0;
	    REP(i,n){
		    cin >>num;
		    update(1,num);
		    ans+=query(MAXN-1)-query(num);
	    }
	    cout << ans<<'\n';
    }
    return 0;
}

