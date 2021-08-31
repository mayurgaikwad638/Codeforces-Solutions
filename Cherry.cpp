#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<climits>
#define ll long long 
 
using namespace std ;
int main()
{
    ll t ;
    cin >> t ;
    while(t--){
        ll n;
        cin >> n ;
        ll arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        ll ans = 0;
        for(int i=0;i<n-1;i++)
        {
            ans = max(ans,arr[i] * arr[i+1]);
        }
        cout << ans << endl ;
        
        
    }
return 0;
}