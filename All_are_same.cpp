#include<iostream>
#include<climits>
#include<algorithm>
using namespace std ;
int main()
{
    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ;
        int arr[n] ;
        int mn = INT_MAX ;
        for(int i=0;i<n;i++){
            cin >> arr[i] ;
            mn = min(arr[i],mn) ;
        }

        bool ok = true ;
        for(int i=1;i<n;i++){
            if(arr[i]!=arr[i-1]){
                ok = false ;
            }
        }

        if(ok){
            cout << "-1" << endl ;
        }else{
            for(int i=0;i<n;i++){
                arr[i] = arr[i]-mn ;
            }
            int ans = arr[0] ;
            for(int i=1;i<n;i++){
                ans = __gcd(ans,arr[i]) ;
            }
            cout << ans << endl ;
        }
       
    }
return 0;
}