#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , M ; 
    cin >> N >> M ;
    priority_queue<long long> A ; 
    for(int i = 0 ; i < N ; i++){
        long long a ; 
        cin >> a ; 

        A.push(a) ; 
    }

    for(int i = 0 ; i < M ; i++){
        long long p = A.top() ;
        A.pop() ; 
        A.push(p/2) ; 
    }

    long long ans = 0 ; 

    while(!A.empty()){
        ans += A.top() ;
        A.pop() ; 
    }

    cout << ans << endl;


}