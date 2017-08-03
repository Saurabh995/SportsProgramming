// @author- razor123
#include<iostream>
#include<cstdlib>
#include<map>
#include<set>
#include<cstdio>
#include<cstring>
#include<climits>
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
#define NINF INT_MIN
#define ison(x, i) (((x)>>(i))&1)
#define syn (ios::sync_with_stdio(false))
int const MAXN=320;
int const INF=11234567;
int g[MAXN][MAXN]; 
map<PI,int> mp;
set<int>nodes[MAXN];
int main() {
    syn;
    int t;
    cin >> t;
    while(t--){
	    int n,f,m;
	    cin >> n >>f >>m;
	    mp.clear();
	    int k=0;
	    REP(i,n){
		    nodes[i].clear();
		    nodes[i].insert(0);
	    }
	    REP(i,2*m+n){
		    g[i][i]=0;
		    FOR(j,i+1,2*m+n-1){
			    g[i][j]=g[j][i]=INF;
		    }
	    }
	    REP(i,n){
		    g[i][i+1]=g[i+1][i]=1;
		    mp[MP(i,0)]=i;
	    }
	    k=n;g[n-1][0]=g[0][n-1]=1;g[n-1][n]=g[n][n-1]=INF;
	    REP(i,m){
		    int ub,uf,vb,vf,w;
		    cin >> ub>>uf>>vb>>vf>>w;
		    ub--,uf--,vb--,vf--;
		    PI a=MP(ub,uf),b=MP(vb,vf);
		    if(!mp.count(a))mp[a]=k++;
		    if(!mp.count(b))mp[b]=k++;
		    int u=mp[a],v=mp[b];
		    g[u][v]=min(g[u][v],w);
		    g[v][u]=min(g[v][u],w);
		    nodes[ub].insert(uf);nodes[vb].insert(vf);

	    }
	    REP(i,n){
		    for(set<int> ::iterator it=++nodes[i].begin();it!=nodes[i].end();it++){
			   int u=*(--it);
			 int v=*(++it);  
			 PI a=MP(i,u),b=MP(i,v);
			 int U,V;
			 U=mp[a],V=mp[b];
			 g[U][V]=g[V][U]=abs(v-u);

			 
			    
		    }
	    }
	    REP(i,k)REP(j,k)REP(l,k)g[j][l]=min(g[j][l],g[j][i]+g[i][l]);
	    int q;
	    cin >> q;
	    while(q--){
		    int ub,uf,vb,vf;
		    cin >> ub>>uf>>vb>>vf;
		    ub--,uf--,vf--,vb--;
		    int u1,u2,v1,v2;
		    set<int> ::iterator it;
		    it=nodes[ub].upper_bound(uf);
		    if(it!=nodes[ub].end())u2=*it;
		    else u2=-1;
		    if(it!=nodes[ub].begin())u1=*(--it);
		    else u1=-1;

		    it=nodes[vb].upper_bound(vf);
		    if(it!=nodes[vb].end())v2=*it;
		    else v2=-1;
		    if(it!=nodes[vb].begin())v1=*(--it);
		    else v1=-1;
		    int ans=INF;
		    if(u2!=-1){
			    if(v1!=-1){
				    int d=abs(uf-u2)+abs(vf-v1);
				    int u=mp[MP(ub,u2)];
				    int v=mp[MP(vb,v1)];
				    ans=min(ans,d+g[u][v]);
			    }
			    if(v2!=-1){

				    int d=abs(uf-u2)+abs(vf-v2);
				    int u=mp[MP(ub,u2)];
				    int v=mp[MP(vb,v2)];
				    ans=min(ans,d+g[u][v]);
			    }
		    }

		    if(u1!=-1){
			    if(v1!=-1){
				    int d=abs(uf-u1)+abs(vf-v1);
				    int u=mp[MP(ub,u1)];
				    int v=mp[MP(vb,v1)];
				    ans=min(ans,d+g[u][v]);
			    }
			    if(v2!=-1){

				    int d=abs(uf-u1)+abs(vf-v2);
				    int u=mp[MP(ub,u1)];
				    int v=mp[MP(vb,v2)];
				    ans=min(ans,d+g[u][v]);
			    }
		    }
		    if(ub==vb)ans=min(ans,abs(uf-vf));
		    cout << ans<<'\n';
	    }
    }
    return 0;
}


