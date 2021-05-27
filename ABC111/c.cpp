#include<bits/stdc++.h>
using namespace std ;


int main(){
    int N ; 
    cin >> N ;
    vector<int> V(N);
    for(int i = 0 ; i < N ; i++) cin >> V.at(i);

    map<int , int> A , B ;
    for(int i = 0 ; i < N; i++){
        if(i % 2 ==0){
            A[V.at(i)]++ ;
        }
        else{
            B[V.at(i)]++ ;
        }
    }

    int a_f = 0 , a_s = 0 ;//max count , second count
    int b_f = 0 , b_s = 0 ;
    int v_a = 0 , sv_a = 0;//max value , second value
    int v_b = 0 , sv_b = 0 ;

    for(auto p : A){
        if(a_f <= p.second){
            a_s = a_f ;
            sv_a = v_a;
            v_a = p.first ;
            a_f = p.second ;
        }
    }
    for(auto p : B){
        if(b_f <= p.second){
            b_s = b_f ;
            sv_b = v_b ;
            v_b = p.first ;
            b_f = p.second ;
        }        
    }

    if( v_a != v_b){
        cout << N - a_f - b_f << endl;
    }
    else{
        cout << N - max(a_f + b_s , a_s + b_f) << endl;
    }

}