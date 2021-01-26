#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<long long > A(N) ; 

    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i)  ; 
    }


    long long ans = 0 ;


    for(int i = 0 ; i < N ; i++){

        long long l = A.at(i) ; 
        long long tmp = 0 ;  
        long long cnt = 0 ; 

        for(int j = i ; j < N ; j++){
            if( A.at(j) >= l){
                cnt++ ;                 

            }
            else{
                l = A.at(j) ; 
                cnt++ ; 
            }

            ans = max(cnt*l , ans ) ; 

        }

    }

    cout << ans << endl;

}