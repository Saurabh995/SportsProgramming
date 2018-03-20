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
   
    string s;
    cin>>s;
    vector<int> a(26);
    int flag = 1;
    // Assign Flag a value of 0 or 1 depending on whether or not you find what you are looking for, in the given string 
    int len=s.length();
    int i;
    for(i=0;i<len;i++){
        a[s[i]-97]++;
    }
    int odd=0;
    if(len%2!=0)
        odd=-1;
    for(i=0;i<26;i++){
        if(a[i]%2!=0)
            odd++;
        if(odd>0)
            flag=0;
            
    }
    if(flag==0)
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}