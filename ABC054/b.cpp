#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N , M ;
    cin >> N >> M ; 
    vector<string> A(N) , B(M);
    for(int i = 0 ; i < N ; i++){
        cin >> A.at(i) ;
    }
    for(int i = 0 ; i < M ; i++){
        cin >> B.at(i) ;
    }
    
    if(M == N){
        if( A.at(0) == B.at(0)){
            cout << "Yes" << endl;
            return 0 ;
        }
        else{
            cout << "No" << endl;
            return 0 ;
        }
    }

    for(int i = 0 ; i < N - M ; i++){
        for(int j = 0 ; j < N - M ; j++){
            int cnt = 0 ;
            for(int k = 0 ; k < M ; k++){
                for(int l = 0 ; l < M ; l++){
                    if(A.at(i+k).at(j+l) == B.at(k).at(l)) cnt++ ;
                }
            }

            if(cnt == M*M){
                cout << "Yes" << endl;
                return 0 ;
            }

        }
    }

    cout << "No" << endl;
}