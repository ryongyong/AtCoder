#include<bits/stdc++.h>
using namespace std ;

int main(){
  string S ; 
  cin >> S ; 
  int N = S.size() ; 
  for(int i = 0 ; i < N ; i++){
    if(S.at(i) == 'a' ||S.at(i) =='i'||S.at(i) =='u'||S.at(i) =='e'||S.at(i) =='o') continue ; 
    cout << S.at(i) ;
  }
  cout << endl;

}