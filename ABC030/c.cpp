#include<bits/stdc++.h>
using namespace std ;


int main(){
    int N , M ; 
    cin >> N >> M ; 
    long long X , Y ; 
    cin >> X >> Y ; 
    vector<long long > a(N) , b(M);

    for(int i = 0 ; i < N ; i++) cin >> a.at(i) ;
    for(int i = 0 ; i < M ; i++) cin >> b.at(i) ;

    long long i = 0 , j = 0 ;
    long long now = 0 ; 
    long long cnt = 0 ;
    bool go = true ;

    while( i < N && j < M){
        if(go){
            i = lower_bound(a.begin() , a.end() , now) - a.begin() ; 
            if(i >= N) break ;

            now = a.at(i) + X ;
            go = false ;
        }
        else{
            j = lower_bound(b.begin(), b.end() , now) - b.begin() ;
            if(j >= M) break ;
            
            now = b.at(j) +  Y ;
            cnt++ ;
            go = true; 
        }

    }

    cout << cnt << endl;
}