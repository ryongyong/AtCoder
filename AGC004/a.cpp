#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long A , B , C ; 
    cin >> A >> B >> C ; 

    long long ans = 0 ; 
    if(A % 2  !=0 && B % 2 != 0 && C % 2 != 0 ){
        ans = min(A*B , min(A*C ,B*C )) ; 
    }

    cout << ans << endl;
}