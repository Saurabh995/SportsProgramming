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
    int t;
    cin >> t;
//  42899452 58539299
// 832193 584380 655132   
    
    for(int a0 = 0; a0 < t; a0++){
        long int b;
        long int w;
        cin >> b >> w;
        long int x;
        long int y;
        long int z;
        cin >> x >> y >> z;
        long int sum=0;
        sum=min(x,y+z)*b+min(y,x+z)*w;
        cout << sum<<'\n';

        
    }
    return 0;
}
