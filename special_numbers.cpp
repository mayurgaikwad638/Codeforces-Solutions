#include<iostream>
using namespace std ;
int main()
{
    long long mod = 1e9+7 ;
    int t; cin >> t ;
    while(t--){
        long long n,k;
        cin >> n >> k ;

        long long ans = 0, j =1 ;
        while(k>0){
            if((k%2)==1){
                ans = (ans+j) % mod ;
            }

            j = (j * n) % mod;
            k = k/2 ;
        }

        cout << ans << endl ;

    }
return 0;
}