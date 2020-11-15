#include<bits/stdc++.h>
using namespace std ;

int main(){
    vector<int> S(6) , T(6);
    int B ;  

    for(int i = 0 ; i < 6 ; i++) cin >> S.at(i) ;
    cin >> B ; 
    for(int i = 0 ; i < 6 ; i++) cin >> T.at(i) ;    

    int cnt = 0 ; 
    for(int i = 0 ; i < 6 ; i++){
        for(int j = 0 ; j < 6 ; j++){
            if(S.at(i)==T.at(j)) cnt++ ; 
        }
    }

    //for(int i = 0 ; i < 6 ; i++)if(T.at(i) == B) cnt++ ; 

    if(cnt == 6) cout << 1 << endl;
    else if(cnt == 5){
        for(int i = 0 ; i < 6 ; i++)if(T.at(i) == B){
            cout << 2 << endl;
            return 0 ; 
        }

        cout << 3 << endl;
    }
    else if( cnt == 4) cout << 4 <<endl;
    else if(cnt == 3) cout << 5 << endl;
    else cout << 0 << endl;

}