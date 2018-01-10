// @author- razor123
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    string s,cpy;
    int i,j;
    while(t--){
        cin >> s;
        cpy=s;
        int l=s.length();
        
        for(i=l-1;i>0;i--){
            if(s[i]>s[i-1]){
                sort (s.begin()+i,s.end());
                for(j=i;j<l;j++){
                    if(s[i-1]<s[j]){
                        int d=s[j];
                        s[j]=s[i-1];
                        s[i-1]=d;
                        break;
                    }
                    
                }
                
                break;
            }
        }
        if(s!=cpy)
            cout << s<<'\n';
        else
            cout <<"no answer"<<'\n';
        
    }
    return 0;
}
