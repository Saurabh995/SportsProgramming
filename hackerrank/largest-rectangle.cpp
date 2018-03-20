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
    int n;
    cin >> n;
    int max=0;
    vector<int> a(n);
    int i;
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    int top;
    int area;
    stack<int> st;
    i=0;
    while(i<n){
        
    
        cin>>a[i];
        if(st.empty()||a[i]>=a[st.top()])
            st.push(i++);
        else{
            top=st.top();
            st.pop();
            area=a[top]*(st.empty()?i:i-st.top()-1);
            if(max<area)
                max=area;
            
        }
        
    }
    while(!st.empty()){
        top=st.top();
            st.pop();
            area=a[top]*(st.empty()?i:i-st.top()-1);
            if(max<area)
                max=area;
            
        
    }
    cout << max;
    return 0;
}
