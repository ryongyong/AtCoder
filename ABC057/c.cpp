#include<bits/stdc++.h>
using namespace std ;

//約数列挙
vector<long long> enum_divisors(long long N) {
    vector<long long> res;
    for (long long i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main() {
    long long N;
    cin >> N;
    vector<pair<long long , long long > > A ;

    for(long long i = 1 ; i*i <= N ;i++){
        if( N%i == 0 ){
            A.push_back(make_pair( i , N/i) ) ; 
        }
    }
    int  ans = sqrt(N) ;

    for(int i = 0 ; i < A.size() ; i++){
        string a , b ; 
        a = to_string(A.at(i).first) ; 
        b = to_string(A.at(i).second) ; 

        int a_size = a.size() ;
        int b_size = b.size() ; 

        ans = min(ans , max(a_size, b_size)); 
    }
    cout << ans << endl;

}
