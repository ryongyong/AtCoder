#include<bits/stdc++.h>
using namespace std ;
int main(){
    long long X , Y , A , B ; 
    cin >> X >> Y >> A >> B ; 
    long long ans = X ; 
    long long cnt = 0 ; 

    if(B > A && ans <= B ){
        while(A*ans < ans+ B && A*ans < Y ){
            cnt++ ; 
            ans *= A ;
        }
    }

cnt += (long long )(Y-ans-1)/B ; 
if(cnt <= 0 ) cnt = 0 ; 
cout << cnt << endl; 

}
