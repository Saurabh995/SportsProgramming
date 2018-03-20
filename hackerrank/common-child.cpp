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
using namespace std;
int arr[5000][5000];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a,b;
    cin >> a>>b;
    int m= a.length();
    int n=b.length();
    
    int i,j;
    
    for(i=0;i<=m;i++){
        arr[i][0]=0;
    }
    for(i=0;i<=n;i++){
        arr[0][i]=0;
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(a[i-1]==b[j-1]){
                arr[i][j]=1+arr[i-1][j-1];
            }
            else
                arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
        }
    }
    cout <<arr[m][n];
    
    return 0;
}
