#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ;
    vector<int > A(N) ; 
    for(int i = 0 ; i < N ; i++) cin >> A.at(i) ;

    sort(A.begin() , A.end()) ; 
    reverse(A.begin() , A.end()) ; 

    int cnt = 0 ; 
    int price = A.at(0) ; 

    for(int i = 1 ; i < N ; i++){
        if(price != A.at(i)) cnt++ ; 


        if(cnt == 1){
            cout << A.at(i) << endl;
            return 0 ;
        }

    }
}