#include<bits/stdc++.h>
using namespace std ; 

int main(){
    long long N , K ; 
    cin >> N >> K ; 



    for(int i = 0 ; i < K ; i++){
        string S = to_string(N) ;
        string h , l ;
        l = h = S ; 
        sort(l.begin() , l.end()) ;
        sort(h.begin() , h.end());
        reverse(h.begin() , h.end()) ;   

        int cnt1 = 0 ;
        int cnt2 = 0 ;
        for(int j = 0 ; j < S.size() ; j++){
            cnt1 += (l.at(j) - '0' )*(long long )pow(10, S.size() - j - 1) ; 
            cnt2 += (h.at(j) - '0' )*(long long )pow(10, S.size() - j - 1) ;  
        }


        N = cnt2 - cnt1 ; 
        //cout << cnt1 << " " << cnt2 << " " << N <<  endl;
    }

    cout << N << endl;

}