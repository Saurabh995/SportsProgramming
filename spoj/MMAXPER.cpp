#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<climits>

#include<list>
#include<queue>
#include<set>
using namespace std;
typedef vector<int> VI;
typedef list<int> LI; 
typedef list<pair<int,int>> LP;
typedef vector<LI> VL;
typedef vector<LP> VLP;
typedef queue<int> Q;
typedef long long LL;
#define FOR(x, b, e) for(int x=b; x<=(e); ++x)
#define FORD(x, b, e) for(int x=b; x>=(e); --x)
#define REP(x, n) for(int x=0; x<(n); ++x)
#define REP1(x, n) for(int x=1; x<=(n); ++x)
#define VAR(v,n) __typeof(n) v=(n)
#define ALL(c) c.begin(),c.end()
#define SIZE(x) (int)x.size()
#define FOREACH(i,c) for(VAR(i,(c).begin());i!=(c).end();++i)
#define PB push_back
#define ST first
#define ND second
#define MP make_pair
#define INF INTMAX
int main(){
	int n;
	cin >> n;

	int sumw=0,sumh=0,a1=0,b1=0,a2,b2;
	cin >> a1 >> b1;
	n--;
	sumw+=b1;
	sumh+=a1;
    int sumw1,sumh1;



	while(n--){
		cin >> a2 >>b2;
		sumw= b2 +max((sumw+abs(a2-a1)), (sumh+abs(a2-b1)));
		sumh= a2+max((sumw+abs(b2-a1)), (sumh+abs(b2-b1)));
		a1=a2;
		b1=b2;

	}

	cout << max((sumw),(sumh));
}
