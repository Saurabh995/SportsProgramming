// @author- razor123
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int h,m;
    cin >> h;
    cin >> m;
    map<int, string> tym;
    tym[1]="one";
    tym[2]="two";
    tym[3]="three";
    tym[4]="four";
    tym[5]="five";
    tym[6]="six";
    tym[7]="seven";
    tym[8]="eight";
    tym[9]="nine";
    tym[10]="ten";
    tym[11]="eleven";
    tym[12]="twelve";
    tym[13]="thirteen";
    tym[14]="fourteen";
    tym[15]="quarter";
    tym[16]="sixteen";
    tym[17]="seventeen";
    tym[18]="eighteen";
    tym[19]="nineteen";
    tym[20]="twenty";
    tym[21]="twenty one";
    tym[22]="twenty two";
    tym[23]="twenty three";
    tym[24]="twenty four";
    tym[25]="twenty five";
    tym[26]="twenty six";
    tym[27]="twenty seven";
    tym[28]="twenty eight";
    tym[29]="twenty nine";
    tym[30]="half";
	if(m>30&&m!=45){
		m=60-m;
		cout << tym[m] << " minutes to " << tym[(h+1)];
	}
	else if(m==0){
		cout << tym[h] <<" o' clock";
	}
	else if(m==45){
		m=60-m;
		cout << tym[m] << " to " << tym[h+1];

	}
	else if(m==15||m==30){
		cout << tym[m] << " past " << tym[h];
	}

	
	else 
	{
		cout << tym[m] << " minutes past " << tym[h];
	}
    return 0;
}