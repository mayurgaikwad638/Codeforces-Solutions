#include<iostream>
#include<vector>
using namespace std ;
#define ll long long
int main()
{
    int n ; cin >> n ;
    vector<ll> v(n) ;
    for(int i=0;i<n;i++){
        cin >> v[i] ;
    }
    //cout << "hello world" ;
    vector<ll> ans(n) ;
    ans[0] = v[0] ;
    //cout << ans[0] ;
    ll maxn = ans[0] ;  
    for(int i=1;i<n;i++){
        ans[i] = v[i]+maxn ;
        maxn = max(maxn,ans[i]) ;
    }

    for(int i=0;i<n;i++){
        cout << ans[i] << " " ;
    }
    //cout << 1 ;
return 0;
}