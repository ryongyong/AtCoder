#include<bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N ; 
  int a ; 

  for  (a=1 ; a<=10 ; a++){
   if (a*1000 - N >= 0 && (a-1)*1000 - N < 0 ){
       cout << a*1000 - N  << endl;
   } 
  }
}

