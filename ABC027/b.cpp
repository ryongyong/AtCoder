#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ;
    cin >> N ;
    vector<int> A(N) ;
    int T = 0 ;
    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ;
        T += A.at(i) ;
    }

    if(T % N != 0 ){
        cout << -1 << endl;
        return 0 ;
    }

    int B = T/N ;
    int cnt = 0 ;

    for(int i = 0 ; i < N ; i++){
        if(A.at(i) != B){
            int j = 1  ; 
            int tot = A.at(i) ;
            while(tot != j*B){

                tot += A.at(j+i) ;
                j++ ;
                cnt++ ; 
            }
            i += j-1   ;
        }

    }

    cout << cnt << endl;
    
}