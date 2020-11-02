#include<bits/stdc++.h>
using namespace std ;

int main(){
    int A , B , C , D ; 
    cin >> A >> B >> C >> D ; 

    if(max(A , C) <=  min(B , D)) cout << min(B , D) - max(C, A)  << endl;
    else cout << 0 << endl;
}