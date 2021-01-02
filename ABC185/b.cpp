#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N , M , T ; 
    cin >> N >> M >> T ; 

    vector<long long > A(M) , B(M) ; 
    for(int i = 0 ; i < M ; i++){
        cin >> A.at(i) >> B.at(i) ; 
    }
    long long now = 0 ;
    long long battery = N ; 

    for(int i = 0 ; i < M ; i++){
        battery -= A.at(i) - now ; 
        if(battery <= 0){
            cout << "No" << endl;
            return 0 ; 
        }
        long long rec = B.at(i) - A.at(i) ; 
        //cout << rec << endl;
        battery = min(N , battery + rec ) ; 
        now = B.at(i) ; 
        //cout << battery << endl;
    }

    if((T-now) >= battery ){
        cout << "No" << endl;
        return 0 ; 
    }
    cout << "Yes" << endl;
}