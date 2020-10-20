#include<bits/stdc++.h>
using namespace std ;

//mint 
using ll = long long ; 
// auto mod int

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
    int N ; cin >> N ; 
    string S1 , S2 ; 
    cin >> S1 >> S2 ; 
    mint ans = 0 ; 
    string S ;

    if(N == 1){
        cout << 3 << endl;
        return 0 ; 
    }
    else if(N==2){
        cout << 6 <<  endl;
        return 0 ;
    }
    for(int i = 0 ; i < N ; i++){
        if(S1.at(i) != S2.at(i)){
            S.push_back('Y') ; 
            i++ ;
        }
        else S.push_back('X') ; 
    }
    
    int M = S.size() ; 
    if(S.at(0)=='X') ans = 3 ; 
    else ans = 6  ;

    for(int i = 1 ; i < M ; i++){
        if(S.at(i-1) == 'X' && S.at(i) == 'X') ans *= 2 ; 
        else if(S.at(i-1) == 'X' && S.at(i) == 'Y') ans *= 2  ; 
        else if(S.at(i-1) == 'Y' && S.at(i) == 'X') ans *= 1 ; 
        else if(S.at(i-1) == 'Y' && S.at(i) == 'Y') ans *= 3 ; 
    }
    cout << ans << endl;
}