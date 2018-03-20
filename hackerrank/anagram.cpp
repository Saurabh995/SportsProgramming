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
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin >>t;
    string a,b;
    int len;
    vector<int> aa(26);
    vector<int> bb(26); 
    while(t--){
        cin >> a;
        int change=0;
        
        if(a.length()%2==0){
            len=a.length()/2-1;
            
            while(len>=0){
                aa[a[len--]-97]++;
                
            }
            len=a.length()/2;
            while(len<(a.length())){
                bb[a[len++]-97]++;
            }
            
            for(int i=0;i<26;i++){
                if(aa[i]>bb[i])
                    change+=aa[i]-bb[i];
                aa[i]=0;
                bb[i]=0;
                
            }
            cout << change<<'\n';
            
        }
        else
            cout<<"-1"<<'\n';
        
    }
    return 0;
}