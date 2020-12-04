#include<bits/stdc++.h>
using namespace std ;

//mint 
using ll = long long ; 
// auto mod int
// https://youtu.be/L8grWxBlIZ4?t=9858
// https://youtu.be/ERZuLAxZffQ?t=4807 : optimize
// https://youtu.be/8uowVvQ_-Mo?t=1329 : division
const int mod = 1000000007;
//const int mod = 998244353;
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


int main(){
    int H , W ; 
    cin >> H >> W ; 
    vector<string> S(H) ; 
    for(int i = 0 ; i < H ; i++) cin >> S.at(i) ; 
    vector<vector<mint> > dp(H+1 , vector<mint>(W+1 , 0)) , X = dp , Y = dp , Z = dp ; 
    dp.at(1).at(1) = 1 ; 

    for(int i = 1 ; i <= H ; i++){
        for(int j = 1 ; j <=W ; j++){
            if( S.at(i-1).at(j-1) == '#'){
                X.at(i).at(j) = 0 ; 
                Y.at(i).at(j) = 0 ; 
                Z.at(i).at(j) = 0 ; 
                continue ; 
            }

            dp.at(i).at(j) += X.at(i).at(j-1) ;
            dp.at(i).at(j) += Y.at(i-1).at(j) ;
            dp.at(i).at(j) += Z.at(i-1).at(j-1) ;

            X.at(i).at(j) = X.at(i).at(j-1) + dp.at(i).at(j) ; 
            Y.at(i).at(j) = Y.at(i-1).at(j) + dp.at(i).at(j) ; 
            Z.at(i).at(j) = Z.at(i-1).at(j-1) + dp.at(i).at(j) ; 

        }
    }
    cout << dp.at(H).at(W) << endl;


}