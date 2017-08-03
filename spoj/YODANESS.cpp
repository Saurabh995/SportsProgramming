// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<unordered_map>
#include<cstring>
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
int const MAXN=30010;
int tree[MAXN];
char s[MAXN][21];
void update(int num,int pos ){
	for(;pos<=30000;pos+=(pos&(-pos)))tree[pos]+=num;
}
int query(int pos){
	int ans=0;
	for(;pos>0;pos-=(pos&(-pos))){
		ans+=tree[pos];
	}
	return ans;
}
int main() {
    syn;
    int t;
    unordered_map<string,int>mp;
    scanf("%d",&t);
    while(t--){
	    mem(tree,0);
	    mp.clear();
	    int n;
	    scanf("%d",&n);
	    REP(i,n){
		    scanf("%s",s[i]);
	    }
	   char p[21];int k=1;
	   REP(i,n){scanf("%s",p);mp[p]=k++;};
	   int count=0;
	   	   REP(i,n){
		   k=mp[s[i]];
	

		   update(1,k);
		   
		   count+=query(30000)-query(k);
	   }
	   printf("%d\n",count);
    }
    return 0;
}


