// @author- razor123
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int p,q;
    cin >>p >>q;
    int i,n,d;
    long int sqr;
    long int sum1,sum2;
    long int power;
    int num=0;
    for(i=p;i<=q;i++){
        n=i;
        d=0;
        while(n!=0){d++;n=n/10;}
        sqr=(unsigned long)pow(i,2);
       
        sum1=0;
        sum2=0;
        power= (unsigned long)(pow(10,d));
        sum1=sqr%power;
        sum2=sqr/power;
     
        if((sum1+sum2)==i){
             cout<<i<<" ";
            num++;
        }   
        
    }
    if(num==0){
        cout <<"INVALID RANGE";
    }
    
    return 0;
}
