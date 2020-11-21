#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int N ; cin >> N ; 
    int ans = N ; 
    string s ; cin >> s ;
    int f = 0 , o = 0 , x = 0 ;

    for(int i = 0 ; i < s.size() ; i++){
        if(s.at(i) == 'f') f++ ; 
        else if( f>0 && s.at(i) == 'o' && s.at(i-1) =='f') o++ ; 
        else if(o>0 && s.at(i) == 'x' && s.at(i-1) == 'o'){
            f-- ; o-- ;
            s.erase(i-2, 3) ; 
            //cout <<s << endl;
            ans -= 3 ; 
            i -= 3 ; 
        }
        else{
            f = 0 ; 
            o = 0 ; 
        }
        //cout << f << " " << o << endl;
    }
    cout << ans << endl;
}