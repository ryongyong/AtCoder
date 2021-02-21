#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N ;
    cin >> N ; 
    int Tot = 2025 ;
    map<int , int > MAP ;

    for(int i = 1 ; i < 10 ; i++){
        for(int j = 1 ; j < 10 ; j++){
            if( i * j == Tot - N ){
                MAP[i] = j ; 
            }
        }
    }

    for(auto p : MAP){
        cout << p.first << " x " << p.second << endl;
    }
}