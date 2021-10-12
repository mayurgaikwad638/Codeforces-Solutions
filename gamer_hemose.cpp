#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n, h ; cin >> n >> h ;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i] ;
        }

        sort(arr,arr+n) ;
        int ans = 0 ;
        if(h<=arr[n-1]){
            cout << "1" << endl ;
            continue ;
        }
        else{
        int sum = arr[n-1] + arr[n-2] ;
        if(h<=sum){
            cout << "2" << endl ;
            continue ;
        }
        else{
             ans = 2*(h/sum) ;
            if(h%sum!=0 && h%sum>arr[n-1]){
                ans += 2 ;
            }
            else if(h%sum!=0 && h%sum<=arr[n-1]){
                ans++ ;
            }
        }
        }

        cout << ans << endl ;
        
        
        

        
        

    }
return 0;
}