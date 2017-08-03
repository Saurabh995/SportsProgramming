//@author-razor123 
#include<iostream>
#include<string>
#include <cstring>
#include<queue>
#include<vector>
#include<climits>
#include <algorithm>
#include <map>
#include <stack>
using namespace std;
typedef  long long ULL;
typedef pair<int,int> PI;
typedef pair<ULL,ULL> PL;
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
int a[(1 << 19)]; 
int b[(1 << 19)]; 
int m, n; 
int sz;
inline void push(int v)
{
    if (b[v]) 
    {
        a[v] = a[v * 2] | a[v * 2 + 1]; 
    }
    else 
    {
        a[v] = a[v * 2] ^ a[v * 2 + 1]; 
    }
}
void build(){
    //cout << sz;
    for (int i = sz - 1; i > 0; i--)
    {
        b[i] = !b[2 * i]; 
        push(i); 
    }
}
void update(int x,int y){
    x=x+sz;
    a[x] = y; 
        while (x > 1) 
        {
            x >>= 1; 
            push(x); 
        }
}
int main()
{
    syn;

    cin >> n >> m; 
   sz=(1 << n); 
    REP(i,1<<n)
    {
        cin >> a[sz + i];
    }
    mem(b,0);
    build();

    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin >> x >> y;
        update(--x,y);
        
        cout << a[1] << endl; 
    }
    
    
    return 0;
}