#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;
#define ll long long 
#define tc int t sc cin >> t sc while(t--)
#define sc ;
#define for(i,j,k) for(int i=j;i<=k;i++)
#define vi vector<int> 
#define vl vector<long long
#define pb push_back
#define map map<int,int>
#define mapl map<ll,ll>
ll mod=1e9+7 ; 



int main()
{
    tc{
        ll n ;
        cin >> n ;

        ll ans=1 ; 
        for(i,3,2*n){

            ans = (ans * i) % mod ;
        }
        cout << ans << endl ;
    }
        
    
return 0;
}