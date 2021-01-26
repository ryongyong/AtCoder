#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    long long  X ; 
    cin >> X ; 
    vector<long long  > V(N), P(N) ; 
    for(int i = 0 ; i < N ; i++){
        cin >> V.at(i) >> P.at(i) ; 
    }

    long long  cnt = 0 ;

    for(int i = 0 ; i < N ; i++){
        cnt += V.at(i)*P.at(i) ; 

        if(cnt > X*100){
            cout << i + 1 << endl;
            return 0 ; 
        }

    }

    cout << -1 << endl;

    


}