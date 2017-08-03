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
int const MAXN=1501;

int main() {
    syn;
    int n,b;
    cin >> n >>b ;
    string s;b=min(b-1,n-b);
    cin >> s;
    int i =0,c=0,mn=-1,mx=-1;

    while(i<(n/2)){
	    if(s[i]!=s[n-1-i]){
		    if(mn==-1)mn=i;
		    c+=min((s[i]-s[n-i-1]+26)%26,(s[n-i-1]-s[i]+26)%26);
		    mx=i;
	    }
	   i++; 
    }
    int sum;
    if(!c){cout<<0;return 0;}
    if(b>=mn&&b<=mx){
	    sum=c+(mx-b)+(b-mn);
	    sum+=min(mx-b,b-mn);

    }
    else if(b>mx){
            sum=c+(b-mn);
    }
    else{
	    sum=c+(mx-b);
    }
    cout << sum;
    return 0;
}


