#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    map<string , int > MAP ; 
    string W_p =""; 

    for(int i = 0 ; i < N ; i++){
        string W ; 
        cin >> W ; 
        MAP[W]++ ; 
        if(MAP[W] == 2 && i%2 == 0){
            cout << "LOSE" << endl;
            return 0 ;
        } 
        else if(MAP[W]== 2 && i%2 == 1){
            cout << "WIN" << endl;
            return 0 ;
        }
        if(W.front() != W_p.back() && i %2 == 0 && i != 0){
            cout << "LOSE" << endl ; 
            return 0 ;
        }
        else if(W.front() != W_p.back() && i %2==1 && i != 0) {
            cout << "WIN"  << endl;
            return 0 ;
        }
        W_p = W ; 


    }

    cout << "DRAW" << endl;
    
}