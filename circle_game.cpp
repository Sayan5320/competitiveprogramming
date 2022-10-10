#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        int mini=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<a[mini]){
                mini=i;
            }
        }
      if(n%2==1){
        cout<<"Mike"<<endl;
      }
      else{
if(mini%2==0){
    cout<<"Joe"<<endl;

}
else{
    cout<<"Mike"<<endl;
}
      }
        }
    }
