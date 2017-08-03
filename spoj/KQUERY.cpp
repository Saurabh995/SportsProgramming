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
const int MAXN=200000+30000+10;
struct mx{
    int val,index,l,r;
    bool q;
       
};
mx arr[MAXN];
int tree[MAXN*2];
int res[MAXN];
int n,k;
struct compare{
    bool operator()(const mx &a, const mx &b){
        return a.val>b.val?1:(a.val==b.val&&a.q?1:0);
    }
};
void update(int p){
   // cout <<n;
    for (tree[p +=n] = 1; p > 1; p >>= 1) tree[p>>1] = tree[p] + tree[p^1];
}
int query(int l,int r){
    int res=0;
    for(l+=n,r+=n;l<r;l>>=1,r>>=1){
        if(l&1)res+=tree[l++];
        if(r&1)res+=tree[--r];
    }
    return res;
}

int main(){
    syn;
    //mem(tree,0);
    cin >> n;int x,l,r;
    REP(i,n){
        cin >> x;
        arr[i].val=x,arr[i].index=i;
        arr[i].q=0;
    }
    cin >> k;
    REP(i,k){
        cin >> l>>r>>x;
        arr[i+n].val=x,arr[i+n].l=l,arr[i+n].r=r,arr[i+n].index=i;
        arr[i+n].q=1;
    }
    sort(arr,arr+n+k,compare());
    REP(i,n+k){
       // cout << arr[i].val<<arr[i].q<<arr[i].index<<endl;
         
        if(!arr[i].q){
           
            update(arr[i].index);
           // cout << tree[5]<<tree[2]<<tree[1]<<endl;
        }
        else {
            
            res[arr[i].index]=query(arr[i].l-1,arr[i].r);
        }
    }
    REP(i,k)cout <<res[i]<<"\n";
   
    
}