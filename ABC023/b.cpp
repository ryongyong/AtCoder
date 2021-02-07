#include<bits/stdc++.h>
using namespace std ;


int main() {
    int N ; 
    cin >> N ; 
    string S ; 
    cin >> S ; 

    string A = "b" ;
    int i = 1 ; 
    if(A == S){
        cout << 0 << endl;
        return 0 ;
    }

    while(A.size() <= N){
        if(i % 3 == 0){
            A.insert(A.begin(),'b') ; 
            A.push_back('b') ; 
        }
        else if(i % 3 == 1){
            A.insert(A.begin(),'a') ; 
            A.push_back('c') ;             
        }
        else if(i % 3 == 2){
            A.insert(A.begin(), 'c') ; 
            A.push_back('a') ;                
        }


        if(A == S){
            cout << i << endl;
            return 0 ; 
        }
        i++ ; 
    } 

    cout << -1 << endl;

}