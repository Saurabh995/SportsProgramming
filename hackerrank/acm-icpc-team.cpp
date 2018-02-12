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
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    int i,j,k;
    int max_n,max_m,ques;
    max_n=0;
    max_m=0;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            ques=0; 
            for(k=0;k<m;k++){
                if(topic[i][k]=='1'||topic[j][k]=='1')
                    ques++;
            }
            if(ques>max_m){max_n=1;max_m=ques;}
                
            else if(ques==max_m){max_n++;}
        }
        
    }
    cout << max_m<<'\n';
    cout << max_n;
    return 0;
}
