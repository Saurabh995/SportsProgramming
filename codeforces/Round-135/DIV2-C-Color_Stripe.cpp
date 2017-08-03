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
int const MAXN=500010;
char s[MAXN];
int i,j,n,k,A,d;
int main(){
	scanf("%d%d%s",&n,&k,s);
	if(k==2){
		for(i=0;i<n;i++)
			if(s[i]=='A'+(i&1))d++;
		A=n-d<d?n-d:d;
		for(i=0;i<n;i++)
			s[i]='A'+(((d==A)+i)&1);
	}
	else
		for(i=0;i<n;i++)
			if(s[i]==s[i+1])
			{
				A++;
				char c='A';
				while(c==s[i]||c==s[i+2])
					c++;
				s[i+1]=c;
			}
	printf("%d\n%s",A,s);
}


