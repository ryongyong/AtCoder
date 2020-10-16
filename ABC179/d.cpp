#include <bits/stdc++.h>
using namespace std;
//mint 
using ll = long long ; 
// auto mod int
//const int mod = 1000000007;
const int mod = 998244353;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x=0):x((x%mod+mod)%mod){}
  mint operator-() const { return mint(-x);}
  mint& operator+=(const mint a) {
    if ((x += a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator-=(const mint a) {
    if ((x += mod-a.x) >= mod) x -= mod;
    return *this;
  }
  mint& operator*=(const mint a) { (x *= a.x) %= mod; return *this;}
  mint operator+(const mint a) const { return mint(*this) += a;}
  mint operator-(const mint a) const { return mint(*this) -= a;}
  mint operator*(const mint a) const { return mint(*this) *= a;}
  mint pow(ll t) const {
    if (!t) return 1;
    mint a = pow(t>>1);
    a *= a;
    if (t&1) a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod-2);}
  mint& operator/=(const mint a) { return *this *= a.inv();}
  mint operator/(const mint a) const { return mint(*this) /= a;}
};
istream& operator>>(istream& is, mint& a) { return is >> a.x;}
ostream& operator<<(ostream& os, const mint& a) { return os << a.x;}




int main(void){
    int N , K ; cin >> N >> K ;
  vector<int> l(K) , r(K) ;
  for(int i = 0 ; i < K ; i++){
    cin >> l.at(i) >> r.at(i) ;
  }
  vector<mint> dp(N+1) ; 
  vector<mint> dpsum(N+1) ; 
  dpsum.at(1) = 1 ; 
  dp.at(1) = 1 ; 
  for(int i = 2 ; i<= N ; i++){
    for(int j = 0 ; j < K ; j++){
      int li = i - r.at(j) ; 
      int ri = i - l.at(j) ; 
      if(ri < 0 ) continue ; 
      li = max(li,1) ; 
      dp.at(i) += dpsum.at(ri) - dpsum.at(li-1) ; 
    }
    dpsum.at(i) = dpsum.at(i-1) + dp.at(i) ; 
  }
  
  cout  << dp.at(N) << endl;
  
}