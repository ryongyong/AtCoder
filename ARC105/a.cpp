#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<long long> A(4)  ; 
    for(int i = 0 ; i < 4 ; i++) cin >> A.at(i) ; 


    for(int is = 0 ; is < (1<<4) ; is++){
        long long cnt1 = 0 ,cnt2 = 0 ;     
        for(int i = 0 ;  i < 4 ; i++){
            if(is>>i&1) cnt1 += A.at(i) ; 
            else cnt2 += A.at(i) ; 
        }
        if(cnt1 == cnt2){
            cout << "Yes" << endl;
            return 0 ; 
        }
    }

    cout << "No" << endl ;
}