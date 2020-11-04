#include<bits/stdc++.h>
using namespace std ; 

int main() {
  vector<int>  sunuke(5) ; 
  
  for (int i = 0 ; i < 5 ; i++){
   cin >> sunuke.at(i) ;  
  }
    
  for (int i = 0 ; i < 5 ; i++){
   if(i+1 != sunuke.at(i)){
     cout << i+1 << endl ; 
   }
  }
}