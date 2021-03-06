#include<bits/stdc++.h>
using namespace std ;

int main(){
    int  N ; 
    cin >> N ; 
    vector<long long > A(N) ,T(N);
    long long cnt = 0 ;

    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ;
        //A.at(i) = abs(A.at(i)) ;
        cnt += (N -i -1) * (A.at(i) * A.at(i)) ;
        cnt += i*(A.at(i)*A.at(i)) ;
    }
    T.at(0) = A.at(0) ;
    for(int i = 1 ; i < N ; i++){
        T.at(i) = T.at(i-1) + A.at(i) ;
    }

    for(int i = 0 ; i < N ; i++){
        long long a = N - i  -1 ; 
        cnt += -2*A.at(i)*(  - T.at(i) + T.at(N-1)) ;
    }

    cout << cnt << endl;


}