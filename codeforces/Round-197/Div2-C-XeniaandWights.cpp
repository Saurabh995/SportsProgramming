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
int c[11];
vector<int> v;
int m;
bool dfs(int x,int y,int k){
	if(k>m)return 1;
	int f=0;
	FOR(i,1,10){
		if(c[i]&&x>=0&&y!=i&&x-i<0){
			f=dfs(x-i,i,k+1);
		}
		else if(c[i]&&x<0&&y!=i&&x+i>0){
			f=dfs(x+i,i,k+1);
		}
		if(f){
			v.PB(i);
			return 1;
		}
	}
	return 0;
}

int main() {
    syn;
    string s;
    cin >> s;cin >> m;
    REP(i,s.size()){
	    if(s[i]=='1')c[i+1]=1;
	    else c[i+1]=0;
    }
    if(dfs(0,0,1)){
	    cout << "YES\n";
	    FORD(i,v.size()-1,0)cout <<v[i]<<" ";

    }
    else{cout << "NO";}
    return 0;
}


