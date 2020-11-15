#include<bits/stdc++.h>
using namespace std ;

int main(){
    string S ;
    cin >> S ;
    map<long long ,  long long> M ; 
    int d = S.size() ; 
    //cout << d << endl;
    for(int i = 0 ; i < d ; i++){
        int a =  S.at(i) - '0' ; 
        M[a]++ ; 
    }
    if(S.size() > 2){
        int MAX = 1400 ; 
        for(int i = 112 ; i <= MAX ; i += 8){
            if(i % 10 == 0 ) continue ; 
            map<long long, long long> N ; 
            string hachi = to_string(i) ; 
            long long b = hachi.size() ; 
            for(int j = 0 ; j < b ; j++){
                int a = hachi.at(j) - '0' ; 
                N[a]++ ; 
            }
            long long  cnt = 0 ; 
            for(auto p : N){
                if(p.second <=  M[p.first]){
                cnt++ ; 
                }
            }
            if(cnt == b){
                cout << "Yes" << endl;
                return 0 ; 
            }
        }
    }
    else if(S.size() <= 2){
        int MAX = 100 ; 
            for(int i = 8 ; i <= MAX ; i += 8){
                if(i %10 == 0 ) continue ; 
                map<long long , long long> N ; 
                string hachi = to_string(i) ; 
                long long b = hachi.size() ;     
                for(int j = 0 ; j < b ; j++){
                    int a = hachi.at(j) - '0' ; 
                    N[a]++ ; 
                }

                long long cnt = 0 ; 
                for(auto p : N){
                    if(p.second <=  M[p.first]){
                    cnt++ ; 
                    }

                }
                
                if(cnt == b){
                    cout << "Yes" << endl;
                    return 0 ; 
                }
            }
    }

    cout << "No" << endl;
}