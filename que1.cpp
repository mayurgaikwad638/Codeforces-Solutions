#include<iostream>
#define ll long long
#define forn for(int i=0;i<n;i++) 
using namespace std ;
int main()
{
    ios_base :: sync_with_stdio(false); cin.tie(NULL) ;
    ll t ; cin >> t ;
    while(t--){
        ll l, r ;
        cin >> l >> r  ;
        if(l==r){
            cout << "0" << endl ;
        }
        
        else{
            ll x = (r/2ll) + 1ll; 
            ll ans = 0 ;
            if(x<l){
               ans = r % l ;
            }
            else ans = r%x ;
            
            cout << ans << endl ;
        }
    } 
return 0;
}