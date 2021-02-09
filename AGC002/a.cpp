#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long a , b ; 
    cin >> a >> b ; 

    if( b < 0 && a < 0  && (b - a )%2 == 0){
        cout << "Negative" << endl;
    }
    else if(b < 0 && a < 0  && (b - a )%2 != 0 ){
        cout << "Positive" << endl;
    }
    else if( a <= 0 && b >= 0){
        cout << "Zero" << endl; 
    }
    else{
        cout << "Positive" << endl;
    }
}