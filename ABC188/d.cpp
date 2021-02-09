#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    long long C ; 
    cin >> C ; 

    map<int , long long > MAP ;
    for(int i = 0 ; i < N ; i++){
        long long  a , b , c ; 
        cin >> a >> b >> c ;
        MAP[a] += c ;
        MAP[b+1] -= c ; 
    }
    long long s = 0 ;
    long long pre = 0 ;
    long long ans = 0 ;
    for(auto p : MAP){
        ans += min(C , s) *(p.first - pre) ; 
        s += p.second ; 
        pre = p.first ; 
    }
    cout << ans << endl;



}