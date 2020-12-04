#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , M ; cin >> N ; 
    vector<int > D(N) ;
    for(int i = 0 ; i < N ; i ++) cin >> D.at(i) ; 
    cin >> M ; 
    vector<int > T(M) ; 
    for(int i = 0 ; i < M ; i++) cin >> T.at(i) ;  

    map<int , int > MAP ; 
    for(int i = 0 ; i < N ; i++){
        MAP[D.at(i)]++ ; 
    }

    for(int i = 0 ; i < M ; i++){
        if(MAP[T.at(i)] > 0 ){
            MAP[T.at(i)]-- ; 
        }
        else{
            cout << "NO" << endl;
            return 0 ; 
        }
    }

    cout << "YES" << endl;

}