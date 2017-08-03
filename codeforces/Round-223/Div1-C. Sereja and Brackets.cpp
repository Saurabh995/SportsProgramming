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
int const MAXN=4000000;

struct node{
    int o,c,t;
    
};

node tree[MAXN];
string s;
void build(int i ,int l,int r){
    if(l==r){
       tree[i].o=(s[l]=='('),tree[i].c=(s[l]==')'),tree[i].t=0;
    }
    else{
        int mid=(l+r)/2;
        build(2*i,l,mid);
        build(2*i+1,mid+1,r);
        int temp=min(tree[2*i].o,tree[2*i+1].c);
        tree[i].t=tree[2*i].t+tree[2*i+1].t+temp*2;
        tree[i].o=tree[2*i].o+tree[2*i+1].o-temp;
        tree[i].c=tree[2*i].c+tree[2*i+1].c-temp;
    }
}
node query(int index,int l ,int r,int i,int j){
    if(i<=l&&j>=r){return tree[index];}
    int mid=(l+r)/2;
    if(j<=mid)return query(index*2,l,mid,i,j);
    if(i>mid)return query(index*2+1,mid+1,r,i,j);
    node a=query(index*2,l,mid,i,mid);
    node b=query(index*2+1,mid+1,r,mid+1,j);
    int temp=min(a.o,b.c);
    node p;
    p.o=a.o+b.o-temp;p.c=a.c+b.c-temp;p.t=a.t+b.t+temp*2;
    return p;
    
}

int main(){
    syn;
    
    int m;
    cin >> s;
    int n=s.length();
    build(1,0,n-1);
    cin >> m;
    REP(i,m){
        int l,r;
        cin >> l >>r;
       
        node ans=query(1,0,n-1,--l,--r);
        cout << ans.t<<'\n';
    }
    return 0;
}

