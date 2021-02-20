#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , K ; 
    cin >> N >> K ; 
    vector<char > D(K);
    for(int i = 0 ; i < K ; i++) cin >> D.at(i) ;

    while(1){
        string S = to_string(N) ;
        bool ok = true ;

        for(int i = 0 ; i < S.size() ; i++){
            for(int j = 0 ; j < K ; j++){
                if( S.at(i) == D.at(j) ) ok = false ;
            }
        }

        if(ok){
            cout << N << endl;
            return 0 ;
        }
        N++ ;
    }

}