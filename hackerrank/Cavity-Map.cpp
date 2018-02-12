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
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    int r,c;
    for( r=1;r<n-1;r++){
        for(c=1;c<n-1;c++){
            if(grid[r-1][c]=='X'||grid[r][c-1]=='X'){
                continue;
            }
            if(grid[r][c]>grid[r-1][c]&&grid[r][c]>grid[r+1][c]&&grid[r][c]>grid[r][c-1]&&grid[r][c]>grid[r][c+1])
                grid[r][c]='X';
        }
    }
    for(int grid_i = 0;grid_i < n;grid_i++){
       cout << grid[grid_i]<<'\n';
    }
    return 0;
}
