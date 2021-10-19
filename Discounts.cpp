#include<iostream>
#include<algorithm>
using namespace std ;
#define ll long long
int main()
{
    ll n ; cin >> n ;
    ll arr[n] ;
    ll sum = 0 ;
    for(ll i=0;i<n;i++){
        cin >> arr[i] ;
        sum = sum + arr[i] ;
    }
    ll m ; cin >> m ;
    ll brr[m] ;
    for(ll i=0;i<m;i++){
        cin >> brr[i] ;
    }

    sort(arr,arr+n) ;
    for(ll i=0;i<m;i++){
        cout << sum - arr[n-brr[i]] << " " << endl ;
    }

return 0;
}