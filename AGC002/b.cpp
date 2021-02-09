#include<bits/stdc++.h>
using namespace std ;


int main(){
    int N , M ; 
    cin >> N >> M ; 
    vector<int > box(N , 1) , red(N , 0) ; 
    red.at(0) = 1 ; 

    for(int i = 0 ; i < M ; i++){
        int x, y ; 
        cin >> x >> y ; 
        x-- ; 
        y-- ;

        if(red.at(x) > 0 ) red.at(y)++ ;             
        if(box.at(x) == 1) red.at(x) = 0 ;

        box.at(x)-- ; 
        box.at(y)++ ; 
    }

    int tot = 0 ;

    for(int i = 0 ; i < N ; i++){
        if(red.at(i) && box.at(i)) tot++ ; 
    }

    cout << tot << endl;
    return 0 ;
    
}