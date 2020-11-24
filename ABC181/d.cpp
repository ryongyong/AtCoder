#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ;
    cin >> S ;
    map<int , int > M ; 
    int d = S.size() ; 
    //cout << d << endl;

    for(int i = 0 ; i < d ; i++){
        int a =  S.at(i) - '0' ; 
        M[a]++ ; //M.firstは出てくる数字, M.secondはその個数
    }


    if( d >= 3){
        for(int i = 112 ; i < 1000 ; i = i + 8 ){
            string B = to_string(i) ; 
            
            map<int , int > MB ; 

            for(int j = 0 ; j < 3 ; j++){
                int b = B.at(j) - '0' ;
                MB[b]++ ; 
            }
            int cnt = 0 ; 

            for(auto p : MB){
                if( p.second <= M[p.first]){
                    cnt += p.second ; 
                } 
            }

            if(cnt == 3){
                cout << "Yes" << endl;
                return 0 ; 
            }

        }
    }
    else if( d == 2){
        for(int k  = 0 ; k < 2 ; k++){
            int A = stoi(S) ; 
            
            for(int i = 0 ; i < 100 ; i = i + 8 ){
                if(A == i ){
                    cout << "Yes" << endl;
                    return 0 ; 
                }
            }
            swap(S.at(0) , S.at(1)) ; 
        }

    }
    else {
        int A = stoi(S) ; 
        if(A == 8){
            cout << "Yes" << endl;
            return 0 ; 
        }
    }

    cout << "No" << endl;
    

}