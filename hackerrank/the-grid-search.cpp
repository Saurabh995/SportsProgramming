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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        int i ,j,k,l;
        int f=0;
        for(i=0;i<R-r+1;i++){
            for(j=0;j<C-c+1;j++){
                 f=1;
                for(k=0;k<r;k++){
                    for(l=0;l<c;l++){
                        if(G[i+k][j+l]!=P[k][l]){
                            f=0;
                            break;
                        }
                            
                    }
                    if(f==0)
                        break;
                    
                        
                }
                if(f==1)
                    break;
            }
            if(f==1)
                break;
        }
        if(f==1)
            cout << "YES"<<'\n';
        else
            cout << "NO"<<'\n';
    }
    return 0;
}
