// @author- razor123
#include<iostream>
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
int const MAXN=200010;
int a[MAXN],b[MAXN];

ULL merge(int left,int mid,int right){
	int i,j,k;
	ULL count=0;
	i=left,j=mid+1,k=left;
	while(i<=mid&&j<=right){
		if(a[i]<=a[j]){
			b[k++]=a[i++];
		}
		else{
			b[k++]=a[j++];
			count+=mid-i+1;
		}
	}
	while(i<=mid){
		b[k++]=a[i++];
	}
	while(j<=right){
		b[k++]=a[j++];
	}
	FOR(i,left,right){
		a[i]=b[i];
	}
	return count;

}
ULL mergesort(int left,int right){
	int mid;
	ULL count=0;
	if(right>left){
		mid=(left+right)/2;
		count+=mergesort(left,mid);
		count+=mergesort(mid+1,right);
		count+=merge(left,mid,right);
	}
	return count;
}
int main() {
    syn;
    int t;
    cin >> t;
    while(t--){
	    int n;
	    cin >> n;
	    
	    REP(i,n)cin >> a[i];
	    cout << mergesort(0,n-1)<<'\n';
    }
    return 0;
}


