// @author- razor123
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
    string s;
    cin >> s;
    int len;
    int r1,r2;
    int r,c;
    int i,j;
    len=s.length();
    r1=floor(sqrt(len));
    r2=ceil(sqrt(len));
    if(r1*r1>=len){r=r1;c=r1;}
    else if(r1*r2>=len){r=r1;c=r2;}
    else{r=r2;c=r2;}
    
    vector<vector<char> > a(r, vector<char>(c));
    int k=0;
     for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(k!=len)
                a[i][j]=s[k++];
            else
                a[i][j]='*';
            
        }
      
    }
    
    
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            if(a[j][i]!='*')
                cout << a[j][i];
        }
        cout<<" ";
    }
    
    return 0;
}
