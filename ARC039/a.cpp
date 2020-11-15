#include<bits/stdc++.h>
using namespace std;
int n,m,ans=-100000,x,y;
int main()
{
    scanf("%d%d",&n,&m);
    x=n,y=m;
    ans=max(ans,(x%100+900-y));
    ans=max(ans,((x/100)*100+x%10+90)-y);
    ans=max(ans,x+9-x%10-y);
    ans=max(ans,x-(y%100+100));
    ans=max(ans,x-((y/100)*100+y%10));
    ans=max(ans,x-(y-y%10));
    cout<<ans<<endl;
    return 0;
}