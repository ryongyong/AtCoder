#include<bits/stdc++.h>
using namespace std ;
//sqrtは誤差が怖いので式変形で殴る
int main(){
    long long a , b , c ;
    cin >> a >> b >> c ;

     long long cnt = c - a-  b ; 
     
     if((c - a - b > 0) && 4*a*b < cnt*cnt ){
         cout << "Yes" << endl;
     }
     else{
         cout << "No" << endl;
     }

     return 0; 
}