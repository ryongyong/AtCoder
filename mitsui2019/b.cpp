#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; 
    cin >> N ; 

    for(int i = 0 ; i <= N ; i++){
        int ans = i * 1.08 ; 
        if(ans == N){
            cout << i << endl;
            return 0 ; 
        }
    }

    cout << ":(" << endl;
}