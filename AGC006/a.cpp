#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    string S , T ;
    cin >> S >> T ; 


    if(S == T ){
        cout << N << endl;
        return 0 ; 
    }

    for(int i = 0 ; i < N ; i++){
        string t = T.substr(0 , S.size()-i  ) ; 

        for(int j = 0 ; j  <N; j++){
            string s = S.substr(S.size() - j ) ; 

            if( s == t){
                cout << 2*N - s.size() << endl;
                return 0 ; 
            }
        }
    }
    cout << 2*N << endl;
}