#include<bits/stdc++.h>
using namespace std ;

//考察したら負値の数の偶奇で決まる

int main(){
    int N ;
    cin >>N ; 
    vector<long long> A(N) ; 
    int cnt = 0 ; 
    long long res = 0 ;

    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ;
        if(A.at(i) <= 0 ) cnt++ ;
        res += abs(A.at(i)) ;
        A.at(i) = abs(A.at(i)) ;
    }

    if(cnt % 2 == 0 ){
        cout << res << endl;
    }
    else{
        sort(A.begin() , A.end()) ;
        res -= 2*A.at(0) ;
        cout << res << endl;
    }


}