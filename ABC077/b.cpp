#include<bits/stdc++.h>
using namespace std ; 

int main(){
  long long N ; 
  cin >> N  ;
  
  for(long long i = 1 ; i <= (N+1) ; i++){
    if(i*i  > N ){
      cout << (i-1)*(i-1) << endl;
      break ; 
    }
  }
}