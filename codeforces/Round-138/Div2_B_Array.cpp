// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
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
int const MAXN=100100;
int mark[MAXN],a[MAXN];

int main() {
    syn;
    int n,m;
    cin >> n >>m;
    REP(i,n)cin >> a[i];
   REP(i,MAXN)mark[i]=0;
   int c=0,l=0,r=0;
   for(;r<n&&c<m;r++){
	if(!mark[a[r]])c++;
      mark[a[r]]++;	

   }
   if(c!=m){cout << -1<<" "<<-1;return 0;}
   for(;l<r;l++){
	   if(mark[a[l]]==1)break;
	   mark[a[l]]--;
   }
   cout << (l+1)<<" "<<(r);

    return 0;


}
