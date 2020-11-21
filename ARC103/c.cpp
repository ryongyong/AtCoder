#include<bits/stdc++.h>
using namespace std ;

int main(){
    int N ; cin >> N ; 
    vector<int > v1(N/2) ,v2(N/2) ; 
    for(int i = 0 ; i < N/2 ; i++) cin >> v1.at(i) >> v2.at(i) ; 
    map<int ,int > mv1 , mv2 ; 

    for(int i = 0 ; i < N/2 ; i++){
        mv1[v1.at(i)]++ ; 
        mv2[v2.at(i)]++ ; 
    }

    int v1_p = 0 , v1_n = 0 , v2_p = 0  , v2_n = 0  ;
    bool ok = false ; 
    int a = 0 , b = 0 , c = 0 , d = 0 ; 

    for(auto  p  : mv1){
        if(!ok){
            if(v1_p < p.second){
                v1_p = p.second ; 
                a = p.first ; 
                ok = true ; 
            }
        }
        else{
            if(v1_p <= p.second){
                v1_n = v1_p ; 
                b = a ; 
                v1_p = p.second ; 
                a = p.first ; 
            }            
            else if( v1_p > p.second && v1_n < p.second){
                v1_n = p.second ; 
                b = p.first ; 
            }
        }
    }
    ok = false ; 
    for(auto  p  : mv2){
        if(!ok){
            if(v2_p < p.second){
                v2_p = p.second ; 
                c = p.first ; 
                ok = true ; 
            }
        }
        else{
            if(v2_p <= p.second){
                v2_n = v2_p ; 
                d = c ; 
                v2_p = p.second ; 
                c = p.first ; 
            }            
            else if( v2_p > p.second && v2_n < p.second){
                v2_n = p.second ; 
                d = p.first ; 
            }
        }
    }


    if(a != c){
        cout << N/2 - mv1.at(a) + N/2 - mv2.at(c) << endl;
    }
    else{
        int ans = 0 ; 
        ans = min(N/2 - mv1[b] + N/2 - mv2[c] , N/2 - mv1[a] + N/2 - mv2[d]) ; 
        cout << ans << endl;
    }

}