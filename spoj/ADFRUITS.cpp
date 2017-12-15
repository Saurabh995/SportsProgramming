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
int  dp[120][120];
int m,n;
int main() {

 	string s1,s2,s3;
 	while(cin >> s1 >> s2){
 		s3="";
 		m=s1.length();
 		n=s2.length();
 		REP(i,m+1){
 			REP(j,n+1){
 				if(i==0||j==0)dp[i][j]=0;
 				else{
 					if(s1[i-1]==s2[j-1])
 						dp[i][j]=1+dp[i-1][j-1];
 					else{
 						dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
 					}
 				}
 			}
 		}
 		int i=m,j=n;
 		while(i>0&&j>0){
 			if(s1[i-1]==s2[j-1]){
 				s3=s1[i-1]+s3;
 				i--;
 				j--;

 			}
 			else if(dp[i-1][j]>dp[i][j-1]){
 				i--;
 			}
 			else
 				j--;
 		}
 		//cout << s3;
 		i=0;j=0;
 		int k=0;
 		string s4="";
 		while(k<s3.length()){
 			if(s1[i]==s2[j]&&s2[j]==s3[k]){
 				s4=s4+s1[i];i++;j++;k++;
 			}
 			else if(s1[i]!=s3[k]){
 				s4+=s1[i++];
 			}
 		    else {
 				s4+=s2[j++];
 			}

 		}
 		while(i<m){
 			s4+=s1[i++];
 		}
 		while(j<n){
 			s4+=s2[j++];
 		}
 		cout << s4<<endl;

    }
}