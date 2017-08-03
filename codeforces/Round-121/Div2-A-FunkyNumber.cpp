// @author- razor123
#include<iostream>
#include<cstdlib>
#include<unordered_map>
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
ULL a[100001];
int main() {
    syn;
    int n;
    cin >> n;
    int i=1;a[i-1]=0;
    while(a[i-1]<n){
	    a[i]=a[i-1]+i;
	    i++;
    }
    for(int j=1;a[j]<n&&j<=i;j++){
	    if(binary_search(a+1,a+i,n-a[j])){cout <<"YES";return 0;
    
	}}
    cout << "NO";
    return 0;
}

