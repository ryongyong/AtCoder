#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N ;
    cin >> N ; 
    long long A , B ; 
    cin >> A >> B ;

    if( A%2 == B%2){
        cout << (B-A)/2 << endl;
    }
    else{
        cout << min(A-1 , N-B) + 1 + (B - A - 1)/2 << endl;
    }
}