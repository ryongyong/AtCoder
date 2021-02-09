#include<bits/stdc++.h>
using namespace std ;

// 計算量的に逐次計算しても間に合う

int main(){
    long long A , K ; 
    cin >> A >> K ; 
    long long day = 0 ;

    if(K == 0 ){
        long long res = 2e12 ; 
        cout << res - A << endl;
        return 0 ;
    }
    else{
        while(A < (long long)2e12 ){
            A += 1 + K*A ; 
            day++ ;
        }
    }

    cout << day << endl;
}