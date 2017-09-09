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
#define syn (ios::sync_with_stdio(false))
#define ison(x, i) (((x)>>(i))&1)
int const MAXN=110;
int a[MAXN];
int main(){
	syn;
	#ifndef ONLINE_JUDGE
	  // for getting input from input.txt
	  freopen("input.txt", "r", stdin);
	  // for writing output to output.txt
	  freopen("output", "w", stdout);
	#endif
	int n,sum=0,curr=0;
	cin >> n;
	REP(i,n){cin >> a[i];sum+=a[i];}
	sort(a,a+n);
	int cnt=0;
	FORD(i,n-1,0){
		curr+=a[i];
		cnt++;
		if(curr>(sum/2)){break;}

	}
	cout << cnt;


    

}
