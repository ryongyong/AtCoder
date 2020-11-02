#include<bits/stdc++.h>
using namespace std; 

int main(){
    int N ; 
    cin >> N ; 

    if(N < 10) cout << "ABC00" << N << endl;
    else if( N < 100 && N > 9) cout << "ABC0" << N << endl;
    else cout <<  "ABC" << N << endl;
}