// @author- razor123
#include<iostream>
#include<vector>
#include<queue>
#include<list>
#include<cmath>
#include<algorithm>
using namespace std;
typedef  long long int ULL;
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
    int t,H,P,A;
        scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&H,&P,&A);
        if(H<=P)
        {
            printf("1\n");
            continue;
        }
        double sqrt_val = ((P-2*A)*(P-2*A)) + 8*P*(H-A) ,ans = sqrt(sqrt_val);
        double total = ceil(((2*A-P)+ans)/(2*P));
        printf("%.0lf\n",(2*total)-1);
    }
    return 0;
}


