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
int const MAXN=100010;
struct p{
	int x,y;
}a[MAXN];
struct mycompare{
	bool operator()(p a1, p a2){
		return (abs(a1.x-0)+abs(a1.y-0))<(abs(a2.x-0)+abs(a2.y-0));
	}
};
int main() {
    syn;
    int n;
    cin >>n;
    ULL s=0;
    REP(i,n){
	    cin >> a[i].x>>a[i].y;
	    s+=2*((a[i].x-0)==0?0:1);
	    s+=2*((a[i].y)==0?0:1);
	    s+=2;
    }
    cout << s<<'\n';
    sort(a,a+n,mycompare());
   	int  dx,dy;
    REP(i,n){
	    dx=a[i].x-0,dy=a[i].y-0;
	    if(dx>0)cout <<"1 " <<dx<<" R"<<'\n';
	    else if(dx<0) cout <<"1 "<<(dx*-1)<<" L"<<'\n';
	    if(dy>0)cout << "1 "<<dy<<" U"<<'\n';
	    else if(dy<0)cout << "1 "<<(dy*-1)<<" D"<<'\n';
	    cout << 2<<'\n';
	    
	    if(dx>0)cout <<"1 " <<dx<<" L"<<'\n';
	    else if(dx<0) cout <<"1 "<<(dx*-1)<<" R"<<'\n';
	    if(dy>0)cout << "1 "<<dy<<" D"<<'\n';
	    else if(dy<0)cout << "1 "<<(dy*-1)<<" U"<<'\n';

	    cout << 3<<'\n';
    }
    return 0;
}

