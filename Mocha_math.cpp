#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int arr[n] ;
        
        for(int i=0;i<n;i++){
            cin >> arr[i] ;
        }
        int res = arr[0] ;
        for(int i=1;i<n;i++){
            res &= arr[i] ;
        }
        cout << res << endl  ;
       // cout << maxele << " " << minele ;
        
    }
return 0;
}