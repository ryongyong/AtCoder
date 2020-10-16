#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S , T ; 
    cin >> S >> T ; 
    vector<string> V ; 
    bool ok = false ; 
    for(int i = 0 ; i < S.size()-T.size()+1 ; i++){
        int cnt = 0 ; 
        for(int j = 0 ; j < T.size() ; j++){
            if(S.at(i+j) == T.at(j) || S.at(i+j)=='?') cnt++ ;
        }

        if(cnt == T.size()){
            string A = S ; 
            for(int j = 0 ; j < S.size() ; j++){
                if(S.at(j) == '?') A.at(j) = 'a' ; 
            }            
            for(int j = 0 ; j < T.size() ; j++){
                A.at(j+i) = (char)T.at(j) ; 
            }
            V.push_back(A) ; 
            ok = true ; 

        }

    }

    if(ok){
        sort(V.begin(), V.end()) ; 
        cout << V.at(0) << endl;
        return 0 ; 
    }

    cout << "UNRESTORABLE" << endl;
}