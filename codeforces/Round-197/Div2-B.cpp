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
int main(){
	syn;

	#ifndef ONLINE_JUDGE
	  // for getting input from input.txt
	  freopen("input.txt", "r", stdin);
	  // for writing output to output.txt
	  freopen("output", "w", stdout);
	#endif
	ULL n,m;
	cin  >> n >>m;
	ULL a;
	ULL ans=0;
	a=1;
	REP(i,m){
		int x;
		cin >> x;
		ans+=((x-a)+n)%n;
		a=x;

	}
	cout <<ans ;





}
