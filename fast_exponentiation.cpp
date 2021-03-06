#include<bits/stdc++.h>
using namespace std;
int mod_expo(int a, int n){
	const int mod = 100000;
	if(n==0)
		return 1;
	if(n%2==0){
		long long half_ans = mod_expo(a, n/2);
		return (half_ans*half_ans)%mod;
	}
	else{
		long long half_ans = mod_expo(a, n/2);
		half_ans = (half_ans*half_ans)%mod;
		half_ans = (half_ans*a)%mod;
		return half_ans;
	}
}
int calc_pow(int a, int b){
	if(b==0)
		return 1;
	if(b%2==0){
		int half_ans = calc_pow(a,b/2);
		return half_ans*half_ans;
	}
	else {
		int half_ans = calc_pow(a,b/2);
		return half_ans*half_ans*a;
	}
}
int main(){
	int a = 2;
	int b = 20;
	//cout<<calc_pow(a,b);
	cout<<mod_expo(a,b);
	return 0;
}