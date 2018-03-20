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
map<string ,int> mp;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    string s;
    
    int i, j;
    while(t--){
        cin >> s;
        mp.clear();
        int l=s.length();
        for(i=0;i<l;i++){
            for(j=1;i+j-1<l;j++){
                string ss=s.substr(i,j);
                sort(ss.begin(),ss.end());
                mp[ss]++;
            }
        }
        long long ans = 0;
		for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it)
			ans += (long long)(it->second) * (it->second - 1) / 2;
		cout << ans << endl;
        
    }
    return 0;
}