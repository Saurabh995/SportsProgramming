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
    cin >> t;
    string a,b;
    vector<int> aa(26);
    vector<int> bb(26);
    int i,len1,len2;
    int f;
    while(t--){
        f=0;
        cin >> a >>b;
        len1=a.length();
        len2=b.length();
        for(i=0;i<len1;i++){
            aa[a[i]-97]++;
        }
        for(i=0;i<len2;i++){
            bb[b[i]-97]++;
        }
        for(i=0;i<26;i++){
            if(aa[i]>=1&&bb[i]>=1){
               
                f=1;
            }
            aa[i]=0;
            bb[i]=0;
        }
        if(f==0)
            cout<<"NO"<<'\n';
        else
             cout << "YES"<<'\n';
        
    }
    return 0;
}