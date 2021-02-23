#include<bits/stdc++.h>
using namespace std ;
const long long mod = 1000000007 ; 

//Nの素因数分解

vector<pair<long long, long long> > prime_factorize(long long N) {
    vector<pair<long long, long long> > res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0;
        while (N % a == 0) {
            ++ex;
            N /= a;
        }
        res.push_back({a, ex});
    }
    if (N != 1) res.push_back({N, 1});
    return res;
}

int main() {
    long long N ;
    cin >> N ;
    long long cnt = 1 ;
    map<long long , long long > MAP ;

    for(int i =1 ; i <= N ; i++){
        const auto &pf = prime_factorize(i) ; //素因数分解
        for(auto p : pf){
            MAP[p.first] += p.second  ; //MAP : keyに素因数とvalueにその個数
        }
    }

    for(auto p : MAP){
        cnt *= p.second + 1;
        cnt %= mod ;

    }

    cout << cnt << endl;
}