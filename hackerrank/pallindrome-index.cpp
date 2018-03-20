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
int main() {
    int t;
    string s,s1;
    cin >> t;
    while(t--){
        cin >> s;
        int n= s.length();
        int f=-1;
        REP(i,n/2){
            if(s[i]!=s[n-i-1]){
                s1=s.substr(0,i)+s.substr(i+1,n);     
                int k=0,n1;
                n1=s1.length();
                while(k<n1/2){
                    if(s1[k]!=s1[n1-k-1])break;
                    k++;
                }
                if(k==(n1/2))f=i;
                else f=n-i-1;
                break;
            }
        }
       cout << f<<'\n' ;
    }
}