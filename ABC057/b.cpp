#include<bits/stdc++.h>
using namespace std ;
const long long  INF = 1e13 + 1 ;

int main(){
    int N , M ; 
    cin >> N >> M ; 
    vector<long long> a(N) , b(N) ; 
    vector<long long> c(M) , d(M) ; 

    for(int i = 0 ; i < N ; i++) cin >> a.at(i) >> b.at(i) ; 
    for(int i = 0 ; i < M ; i++) cin >> c.at(i) >> d.at(i) ;

    for(int i = 0 ; i < N ; i++){
        long long cnt =  INF ; 
        int check = 1 ; 

        for(int j = 0 ; j < M ; j++){
            long long dist = abs(a.at(i) - c.at(j)) + abs(b.at(i) - d.at(j)); 
            if(dist < cnt){
                cnt = dist ;
                check = j + 1 ;                              
            }
        }
        cout << check <<endl;
    }
}