#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >>t ;
    while(t--){
        int n ; cin >> n ;
        int arr[n] ;
        int even=0, odd=0 ;
        for(int i=0;i<n;i++){
             cin >> arr[i] ;
             if(arr[i]%2==0) even++ ;
             else odd++ ;
        }

        if(n%2==0){
            if(odd==n){
                cout << "NO" << endl ;
            }
            else if(even==n){
                cout << "NO" << endl ;
            }
            else{
                cout << "YES" << endl ;
            }
        }
        else{
            if(even==n){
                cout << "NO" << endl ;
            }
            else{
                cout << "YES" << endl ;
            }
        }

    }
return 0;
}