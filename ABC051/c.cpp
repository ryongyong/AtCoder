#include<bits/stdc++.h>
using namespace std ;


int main(){
    int sx , sy , tx , ty ; 
    cin >> sx >> sy >> tx >> ty ; 

    const int dx = tx - sx ; 
    const int dy = ty - sy ; 

    string X(dx , 'R') ; 
    string Y(dy , 'U') ; 
    cout << Y << X  ;

    string X_R1(dx , 'L') ; 
    string Y_R1(dy , 'D') ; 
    cout << Y_R1 << X_R1 ; 

    string X_2(dx+1,'R')  ; 
    string Y_2(dy+1 , 'U') ;
    cout << 'L' << Y_2 << X_2 << 'D'; 

    string X_R2(dx+1,'L')  ; 
    string Y_R2(dy+1 , 'D') ;

    cout << 'R' << Y_R2 << X_R2 << 'U' << endl;

}