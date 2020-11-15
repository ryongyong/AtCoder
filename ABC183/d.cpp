#include<bits/stdc++.h>
using namespace std ; 
const int MAX = 210000 ; 
int main(){
    long long N , W ; 
    cin >> N >> W ;

    vector<long long> num(MAX+1 , 0);

    for(int i = 0 ; i < N ; i++){
        long long s , t , w ; 
        cin >> s >> t >> w ; 
        num.at(s) += w ;
        num.at(t) -= w ; 
    }

    for(int i = 0 ; i < MAX ; i++){
        num.at(i+1) += num.at(i) ; 
        if(num.at(i)> W ){
            cout << "No" << endl  ; 
            return 0 ; 
        }
    }

    cout << "Yes" << endl;
}