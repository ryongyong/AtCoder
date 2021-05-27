#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N , K ,S ;
    cin  >> N >> K >> S  ;

    int A = S + 1;
    if(A > 1000000000) A = 1 ; 

    for(int i = 0 ; i < K ; i++) cout << S << " " ;
    for(int i = K ; i < N ; i++) cout << A << " " ; 

    cout << endl;


}
