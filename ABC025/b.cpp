#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , A , B ; 
    cin >> N >> A >> B ; 
    int ans = 0 ; 

    for(int i = 0 ; i < N ; i++){
        string S ; 
        int d ;
        cin >> S ;
        cin >> d ; 

        if(S  == "West"){
            if( d < A  ) ans -= A ; 
            else if(d > B) ans -= B ; 
            else ans -= d ; 
        }
        else{
            if( d < A ) ans += A ; 
            else if(d > B) ans += B ; 
            else ans += d ; 
        }
    }

    if(ans < 0 ){
        cout << "West" << " " << abs(ans) << endl;
    }
    else if( ans > 0 ){
        cout << "East" << " " << abs(ans) << endl;
    }
    else{
        cout << 0 << endl;
    }
}