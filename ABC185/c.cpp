#include<bits/stdc++.h>
using namespace std ;

long long dp[300][300]; //maxサイズを変更すること 

long long  nCr(int n, int r)
{
       if(n==r) return dp[n][r] = 1;
       if(r==0) return dp[n][r] = 1;
       if(r==1) return dp[n][r] = n;
       if(dp[n][r]) return dp[n][r];
       return dp[n][r] = nCr(n-1,r) + nCr(n-1,r-1);
}

int main(){
    int L ; 
    cin >> L ; 
    

    cout << nCr(L-1 , 11) << endl;
}