#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int arr[n] ;
        for(int i=0;i<n;i++) cin >> arr[i] ;
        sort(arr,arr+n) ;
       // for(int i=0;i<n;i++) cout << arr[i] << " ";
       int ct = 1 ;
       int temp = arr[0] ;
       for(int i=1;i<n;i++){
           if(arr[i]==temp){
               ct++ ;
           }
       }
       cout << n-ct << endl ;

    }
return 0;
}