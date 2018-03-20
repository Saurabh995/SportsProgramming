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
    stack<char> st;
    int t;
    cin>>t;
    int i;
    while(t--){
        string s;
        cin >> s;
        int i;
        int len=s.length();
        int f=1;

        while ( ! st.empty() )
        {
            st.pop();
        }   
        for(i=0;i<len;i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
                st.push(s[i]);
            else{
                    if(st.empty())
                        f=0;
                    else{
                            switch(s[i]){
                        case ')':
                                    if(st.top()=='(')
                                        st.pop();
                                    else
                                         f=0;
                                    break;
                        case '}':
                                    if(st.top()=='{')
                                        st.pop();
                                    else
                                         f=0;
                                    break;
                        case ']':
                                    if(st.top()=='[')
                                        st.pop();
                                    else
                                         f=0;
                                    break;
                                
                                
                            }
                        }

                     } 
                    if(f==0)
                        break;
                        
                }
            
                
        
        
        if(f==1&&st.empty()){
            cout <<"YES"<<'\n';
        }
        else
            cout << "NO"<<'\n';
        
    }
        return 0;
}