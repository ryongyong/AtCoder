#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long N , a; 
    cin >> N >> a;
    string k ;
    cin >> k ;
    vector<long long> b(N+1);
    b.at(0) = 0 ;
    for(int i = 1 ; i < N+1 ;i++) cin >> b.at(i);
    vector<long long> A(N+1);//visited time

    for(int i = 0 ; i < N+1 ; i++){
        A.at(i) = -1 ;
    }

    long long L = k.size();
    long long now = B.at(a);
    long long t = 0 ;
    A.at(now) = t ;
    t++ ;

    long long k_i = -1;
    if(L < 7){
        k_i = stoi(k);
    }

    while(true){


        if(t == k_i){
            break ;
        }

        now = B.at(now);
        if(A.at(now)!= -1){
            long long loop = abs(t - A.at(now));
            a += loop ;
        }
    }

}