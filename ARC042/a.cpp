#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , M ; 
    cin >> N >> M ;

    vector<int > a(M) ;
    vector<bool > visit(N) ;
    for(int i = 0 ; i < M ; i++){
        cin >> a.at(i) ;
    }

    reverse(a.begin() , a.end()) ;
    vector<bool> visited(N , false) ;
    vector<int > res ;

    for(int i = 0 ; i < M ; i++){
        if(!visited.at(a.at(i) - 1)){
            visited.at(a.at(i) - 1) = true ;
            res.push_back(a.at(i)) ;
        }
    } 

    for(int i = 0 ; i < visited.size() ; i++){
        if(!visited.at(i)){
            res.push_back(i+1) ;
        }
    }
    
    for(int i = 0 ; i < N ; i++){
        cout << res.at(i) << endl;
    }

}