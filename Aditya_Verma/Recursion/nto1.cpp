#include<bits/stdc++.h>
using namespace std;
void rec(int n){
    if(n==0)
        return;
    cout<<n<<endl;
    rec(n-1);
}
int main(){
    int n = 5;
    rec(n);
    return 0;
}