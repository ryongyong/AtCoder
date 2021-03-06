#include<bits/stdc++.h>
using namespace std ;

int main(){
    double N ; 
    cin >> N ;
    double cnt = 0 ;

    for(int i = 1 ; i < N ; i++){
        cnt += double(N/(N - i)) ;
    }

    cout << fixed << setprecision(15) << cnt << endl;
}