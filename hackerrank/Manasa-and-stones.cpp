#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

void manasa(int sum,int n,int a,int b);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin >> t;
    set<int> s;
    set<int>::iterator it;
    while(t--){
        int n,a,b,sum;
        cin >> n;
        cin>>a;
        cin>>b;
        int i,j;
        
        
        for(i=0,j=n-1;i<n;i++,j--){
           s.insert((a*j+b*i));
        }
        for(it=s.begin();it!=s.end();it++){
            cout <<*it<<" ";
        }
        s.clear();
        cout <<'\n';
        
    }
    return 0;
}




