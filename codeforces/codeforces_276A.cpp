#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  n,k,i,j,x,ans=-10000000006;
    cin>>n>>k;
    long long  a[n+10],b[n+10];
    for(i=0;i<n;i++){
        cin>>a[i]>>b[i];
        if(b[i]>k){
            x=a[i]-(b[i]-k);
        }
        else
            x=a[i];
        ans=max(ans,x);
    }
    cout<<ans<<endl;

    return 0;
}
