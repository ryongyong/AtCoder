#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N ; 
    cin >> N ; 
    vector<string > S(N) ;
    for(int i = 0 ; i < N ; i++) cin >> S.at(i) ;

    map<string , int> M , MA; 


    for(int i = 0 ; i < N ; i++){
        if(S.at(i).at(0) != '!'){
            if(M[S.at(i)] == 0 ){
                M[S.at(i)]++ ;
            }
        }
    }

    for(int i = 0 ; i < N ; i++){
        if(S.at(i).at(0) == '!'){
            string A = S.at(i).substr(1 ) ;
            if(MA[A] == 0 ){
                MA[A]++ ;
            }
        }
    }

    for(int i = 0 ; i < N ; i++){
        string B = S.at(i) ; 
        if(S.at(i).at(0) == '!'){
            B = S.at(i).substr(1 ) ; 
        }

        if(M[B] == 1 && MA[B] == 1){
            cout << B << endl;
            return 0 ;
        }

    }

    cout << "satisfiable" << endl;



}