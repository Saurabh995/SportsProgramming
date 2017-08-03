// @author- razor123
#include<iostream>
#include<string>
#include <cstring>
#include<queue>
#include<vector>
#include<climits>
#include <algorithm>
#include <map>
#include <stack>
#include <cmath>
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
#define syn ios::sync_with_stdio(false)
double const g=10.0;
double u,k1,k2;
double  solve(double i) {
	return (u*u)/(2.0*g)*(2.0*k1*sin(2.0*i) + k2*sin(i)*sin(i));
}
double search(double l,double h,double epsi){
    if(fabs(l-h)<epsi)return (l+h)/2.0;
    
    double lt=l+(h-l)/3.0;
    double rt=h-(h-l)/3.0;
    if(solve(lt)<solve(rt))return search(lt,h,epsi);
    else return search(l,rt,epsi);
}
int main(){
    
    int t;
    scanf("%d",&t);
    while(t--){
        scanf("%lf %lf %lf",&u,&k1,&k2);
        double ansi=search(0.0,acos(-1.0)/2.0,1e-9);
        printf("%.3lf %.3lf\n",ansi,solve(ansi));
    }
    return 0;
}