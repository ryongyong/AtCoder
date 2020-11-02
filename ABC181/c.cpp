#include<bits/stdc++.h>
using namespace std ;



int main(){
    int N ; 
    cin >>  N ; 
    
    vector<long long> x(N) , y(N); 

    for(int i = 0 ; i < N ; i++) cin >> x.at(i) >> y.at(i) ; 
    
    for(int i = 0 ; i < N ; i++){
        for(int j = i + 1 ; j < N ; j++){
            for(int k = j + 1 ; k < N ; k++){
                double a_vec_x = x.at(i) - x.at(j) ;
                double a_vec_y = y.at(i) - y.at(j) ; 
                double b_vec_x = x.at(i) - x.at(k) ;
                double b_vec_y = y.at(i) - y.at(k) ;       
                double S = abs(a_vec_x * b_vec_y - b_vec_x * a_vec_y)/2 ;          
                //cout << S << endl; 
                if(S < 0.5 ){
                    cout << "Yes" << endl;
                    return 0 ; 
                }
            }
        }
    }
    cout << "No" << endl;
}