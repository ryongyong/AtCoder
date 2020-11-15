#include<bits/stdc++.h>
using namespace std ; 


bool IsPrime(long long num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false; // 偶数はあらかじめ除く

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            // 素数ではない
            return false;
        }
    }

    // 素数である
    return true;
}

int main(){
    long long N ; 
    cin >> N ; 

    if(N == 1){
        cout << "Not Prime" << endl;
        return 0 ; 
    }

    if(IsPrime(N)){
        cout << "Prime" << endl;
        return 0 ; 
    }


    if((N % 10 != 5) && (N % 10 != 2) && (N % 10 != 4) && (N % 10 != 6) && (N % 10 != 8) && N%10 != 0 ){
        string S = to_string(N) ; 
        int cnt = 0 ; 
        for(int i = 0 ; i < S.size() ; i++) cnt += S.at(i) ; 
        if(cnt %3 != 0 ){
            cout << "Prime" << endl;
            return 0 ; 
        }
    }

    cout << "Not Prime" << endl;
}