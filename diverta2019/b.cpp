#include<bits/stdc++.h>
using namespace std ;

int main(){
    int R , G , B , N ; 
    cin >> R >> G >> B >> N ; 
    int cnt=0;

    for(int i = 0 ; i <= N/R ; i++){
        for(int j = 0 ; j <= N/G ; j++){

            int tmp = (N - i * R - j * G) / B ; 
            int tmp2 = (N - i * R - j * G) % B ; 
            if(  tmp  >= 0 &&  tmp2 == 0 ) cnt++ ; 

        }
    }

    cout << cnt << endl;
}