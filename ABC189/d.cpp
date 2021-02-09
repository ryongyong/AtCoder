#include<bits/stdc++.h>
using namespace std ;
///DP難しいね
int main(){
    int N ; 
    cin >> N ; 
    vector<long long > dp(2,1) ;
    for(int i = 0 ; i < N ; i++){
        string S ; 
        cin >> S ; 
        vector<long long > p(2) ; 
        swap(dp,p) ; 

        for(int j = 0 ; j < 2 ; j++){
            for(int x = 0 ; x < 2 ; x++){
                int nj = j ; // nj = true or false
                if(S == "AND") nj &= x ; 
                else nj |= x ; 

                dp.at(nj) += p.at(j) ; 
            }
        }
    }

    cout << dp.at(1) << endl;
    return 0 ; 


}