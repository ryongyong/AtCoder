#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ;
    vector<int > A(N) , B(N);

    for(int i = 0 ; i < N ; i++) cin >> A.at(i) >> B.at(i) ;

    int cnt = 1001001 ; 
    int a = 1001001 , b = 1001001 , c = 1001001; 
    int a_i , b_i ; 

    for(int i = 0 ; i < N ; i++){

        if( a > A.at(i) ){
            a = min(a , A.at(i)); 
            a_i = i ; 
        }
        if( b > B.at(i)){
            b = min(b , B.at(i)); 
            b_i = i ; 
        }    
    }
    cnt = max(b , a) ;

    

    if( b_i == a_i ){
        cnt = a + b ; 
        sort(A.begin() , A.end()) ;
        sort(B.begin() , B.end()) ;

        cnt = min( cnt , max( a , B.at(1))); 
        cnt = min( cnt , max( b , A.at(1))); 
        cout << cnt << endl;
        return 0 ;
    }

    cout << max(cnt , min(a , b) ) << endl;

}