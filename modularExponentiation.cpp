#include <bits/stdc++.h>
using namespace std;

int modularExponentiation(int a, int b, int m) {
	// Write your code here.
	int  res = 1;
	long long aa = a;
	while(b > 0){
		if(b & 1){
			res = res * aa % m;
		}
		aa = aa*aa % m;
		b >>= 1;
	}
	return res;


}
int main(){

}