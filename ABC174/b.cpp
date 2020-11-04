#include<bits/stdc++.h>
using namespace std ; 

int main(){
  int N ;
  double D ; 
  cin >> N >> D ; 
  int cnt=0;
  
  for(int i = 0 ; i < N ; i++){
    double B , C ; 
    cin >> B >> C ; 
    
    if(B*B + C*C <= D*D){
      cnt++ ; 
    }
  }
  cout << cnt << endl ; 
}