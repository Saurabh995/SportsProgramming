// @author- razor123
#include<iostream>
#include<climits>
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
int main(){
    syn;
    int n;
    int i,j,f;
    cin >> n;
    vector <int>a(100);
    for(i=0;i<n;i++){
        a[i]=1;
    }
    f=1;
    int c,sum;
    for(j=n;j>=1;j--){
        c=0;
        for(i=0;i<f;i++){
            sum=c+a[i]*j;
            a[i]=sum%10;
            c=sum/10;
        }
        while(c!=0){
            a[i++]=c%10;
            f++;
            c=c/10;
        }
        
        
        
    }
    for(i=f-1;i>=0;i--)
        cout<<a[i];
    return 0;
}
