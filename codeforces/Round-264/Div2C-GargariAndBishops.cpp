// @author- razor123
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<climits>
#include<vector>
#include<cmath>
#include<queue>
#include<list>
#include<sstream>
#include<algorithm>
#include<unordered_map>
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
int const MAXN=2010;
ULL a[MAXN][MAXN];
ULL mp1[MAXN][MAXN],mp2[MAXN][MAXN];
ULL s1[2*MAXN],s2[MAXN*2]; 
int main() {
    syn;
    int n;
    cin >> n;
    REP(i,n)REP(j,n)cin >>a[i][j];
    mem(s1,0),mem(s2,0);
     
    REP(i,n){
	    int r=i,c=0;
	    while(r<n&&c<n){
		    s1[i]+=a[r][c];
		    mp1[r][c]=i;
		    r++,c++;
	    }

	    if(i!=0){
		    r=0,c=i;
		    while(r<n&&c<n){
			    s1[i+n]+=a[r][c];
			    mp1[r][c]=i+n;
			    r++,c++;
		    }
	    }
	    r=i,c=0;
	    while(r>=0&&c<n){
		    s2[i]+=a[r][c];
		    mp2[r][c]=i;
		    r--,c++;
	    }
    }
    FORD(i,n-1,0){
	    int c =i,r=n-1;
	    while(r>=0&&c<n){
		    s2[i+n]+=a[r][c];
		    mp2[r][c]=i+n;
		    r--,c++;
	    }
    }
   
    ULL mx1=INT_MIN,r1,c1,r2,c2,ans,mx2=INT_MIN;
    REP(i,n){
	    REP(j,n){
		    if((i+j)%2==0&&s1[mp1[i][j]]+s2[mp2[i][j]]-a[i][j]>mx1){
			    mx1=s1[mp1[i][j]]+s2[mp2[i][j]]-a[i][j];
			    r1=i,c1=j;
		    }
		    if((i+j)%2!=0&&s1[mp1[i][j]]+s2[mp2[i][j]]-a[i][j]>mx2){
			    mx2=s1[mp1[i][j]]+s2[mp2[i][j]]-a[i][j];
			    r2=i,c2=j;
		    } 
 

	    }
    }
    ans=mx1+mx2;
    r1++,c1++,r2++,c2++;
    if(r2<r1||(r1==r2&&c2<c1)){swap(r1,r2),swap(c1,c2);}
    cout << ans<<'\n'<<r1<<' '<<c1<<' '<<r2<<' '<<c2;


    
    return 0;
}


