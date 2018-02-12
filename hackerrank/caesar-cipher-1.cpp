#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
   
    int l,i;
    l=s.length();
    for(i=0;i<l;i++){
        if(s[i]>=65&&s[i]<=90){
            int c=s[i]-65+1;
            c=c+k;
            c=c%26;
            if(c==0)
                c=26;
            s[i]=(char)(64+c);
            
        }
        if(s[i]>=97&&s[i]<=122){
            int c=s[i]-97+1;
            c=c+k;
            c=c%26;
            if(c==0)
                c=26;
            s[i]=(char)(96+c);
            
            
        }
        
    }
    cout << s;
    return 0;
    
}
