#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long A , B , C ; 
    cin >> A >> B >> C ;

    if(A%2 != 0 && B%2 != 0 && C%2 != 0){
        cout << 0 << endl;
        return 0 ; 
    }
    else if(A == B && B == C){
        cout << -1 << endl;
        return 0 ; 
    }

    long long cnt = 0 ; 

    while(A%2 == 0 && B%2 == 0 && C%2 == 0){
        cnt++ ; 
        long long a = B/2 + C/2 ; 
        long long b = A/2 + C/2 ; 
        long long c = A/2 + B/2 ; 
        A =  a ; 
        B = b ; 
        C = c ; 
    }

    cout << cnt << endl;
}