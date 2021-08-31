#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int arr[n] ;
        for(int i=1;i<=n;i++) arr[i] = i ;
        if(n%2!=0){
            int i ;
            for(i=1;i<n-2;i+=2){
                swap(arr[i],arr[i+1]) ;
            }
            int temp1 = arr[i] ;
            arr[i] = arr[n] ;
            arr[n] = arr[n-1] ;
            arr[i+1] =  temp1 ;
            for(int i=1;i<=n;i++) cout << arr[i] << " " ;
            cout << endl ;
        }
        else{
            for(int i=1;i<n;i+=2){
                swap(arr[i],arr[i+1]) ;
            }
            for(int i=1;i<=n;i++) cout << arr[i] << " " ;
            cout << endl ;
        }

        
    }
return 0;
}