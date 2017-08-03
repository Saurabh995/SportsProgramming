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

int main() {
    syn;
    int n,m,k,k2;
    cin >> n >> m >>k;
    k2=k;
    int dir=0,i=1,j=1,p=0;
    while(i>=1&&i<=n&&j>=1&&j<=m){
	     
	     if(k>1&&(p==0)){cout<<2<<" ";}
	    if(k==1&&p==0)cout <<(m*n-(k2-1)*2)<<" ";
	    cout <<i<<" "<<j<<" ";
	    if(j==m&!dir){dir=1;i++;}
	    else if(j==1&&dir){dir=0;i++;}
	    else if(dir)j--;
	    else if(!dir)j++;
	    p++;
	    if(k>1&&(p==2)){p=0;k--;cout <<'\n'; }
	   
    }

    return 0;
}


