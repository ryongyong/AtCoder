#include<bits/stdc++.h>
using namespace std ;

int main(){
    int  N , Q ; 
    cin >> N >> Q ; 
    string S ; 
    cin >> S ; 
    vector<int>  T(N,0) ; 


    for(int i = 0 ; i < N-1 ; i++){
        if(S.at(i) == 'A' && S.at(i+1) == 'C') T.at(i+1) = T.at(i)+ 1 ; 
        else T.at(i+1) = T.at(i) ; 
    }

    for(int i = 0 ; i < Q ; i++){
        int a , b ; 
        cin >> a >> b ; 
        a-- ;
        b-- ; 
        cout << T.at(b) - T.at(a) << endl;
    }


}