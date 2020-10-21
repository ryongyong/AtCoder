#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
using ll = long long;
int main(){
    ll n;
    cin >> n;
    
    if(n % 2 == 1){
        cout << 0 << endl;
        return 0;
    }
    
    ll ans = 0;
    n/=2;
    while(n){
        ans += n / 5;
        n /= 5;
    }
    cout << ans << endl;
    
}   

