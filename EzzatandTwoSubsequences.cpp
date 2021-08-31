#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std ;
#define ll long long
int main()
{
    ll t ; cin >> t;
    while(t--){
        ll n ; cin >> n ;
        ll arr[n] ;
        for(ll i=0;i<n;i++){
            cin >> arr[i] ;
        }
        sort(arr,arr+n) ;
        double sum = 0, size = 0 ;
        for(ll i=0;i<n-1;i++){
            sum += arr[i] ;
            size = i+1 ;
        }
        //cout << sum <<" " << size ;
        double average = (sum/size) ;
        average += arr[n-1] ;
        cout << setprecision(10) ;
        cout << average << endl ;
    }
return 0;
}