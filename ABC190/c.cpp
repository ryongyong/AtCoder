#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , M ;
    cin >> N >> M ; 
    vector<int > A(M) , B(M) ; 


    for(int i = 0 ; i < M ; i++){
        cin >> A.at(i) >> B.at(i) ;
        A.at(i)-- ; 
        B.at(i)-- ; 
    }

    int K ;
    cin >> K ; 
    vector<int > C(K) , D(K) ; 


    for(int i = 0 ; i < K ; i++){
        cin >> C.at(i) >> D.at(i) ;
        C.at(i)-- ; 
        D.at(i)-- ; 
    }    

    int ans = 0 ; 


    for(int bit = 0 ; bit < (1 << K) ; bit++ ){
        int res = 0 ; 
        vector<int > T(N,0) ;    

        for(int i = 0 ; i < K ; i++){
            if(bit & (1 << i)){
                T.at(C.at(i))++ ; 
            }
            else{
                T.at(D.at(i))++ ; 
            }
        }

        for(int i = 0 ; i < M ; i++){
            if(T.at(A.at(i)) > 0 && T.at(B.at(i)) > 0  ) res++ ; 
        }

        ans = max(ans , res ) ; 

    }
    cout << ans << endl;
}