// @author- razor123
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int contiguous(int a[],int len);
int main(){
	int t,N,i,sum_non_cont,min_cont;
	cin >> t;
	while(t--){
		sum_non_cont=0;
		min_cont=-9999999;
		cin >> N;
		int a[N];	
		for(i=0;i<N;i++){
			cin >> a[i];
			if(a[i]>0)
				sum_non_cont+=a[i];
			if(a[i]>min_cont)
				min_cont=a[i];
		}
		if(min_cont<0){
			cout << min_cont <<" "<< min_cont <<"\n";

		}
		else{
			cout << contiguous(a,N) <<" "<< sum_non_cont<<"\n";
		}
	}
	return 0;
}
int contiguous(int a[],int len){
	int i,current_index = -1,val=0,current_sum=0,best_sum=0,base_index=-1,end_index=-1;
	for(i=0;i<len;i++){
		val=current_sum+a[i];
		if(val>0){
			if(current_sum=0)
				current_index=i;
			current_sum=val;

		}
		else{
			current_sum=0;
		}
		if(current_sum>best_sum){
			best_sum=current_sum;
			base_index=current_index;
			end_index=i;
		}

	}
	return best_sum;

}
