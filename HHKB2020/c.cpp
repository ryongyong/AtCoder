#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 
    vector<int > P(210000) ; 
    int cnt = 0 ; 

    for(int i = 0 ; i < N ; i++){
        int s ; 
        cin >> s; 
        P.at(s)++ ; 
        while(P.at(cnt)){
            cnt++ ; 
        }

        cout << cnt << endl;
    }
}

