#include<iostream>
using namespace std ;
int main()
{
    int t; cin >> t;
    while(t--){
    int n ; cin >> n ;
    int arr[n] ;
    bool neg = false ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
        if(arr[i]<0)
        neg = true ;
    }

    if(neg){
        cout << "No" << endl ;
    }
    else{
        cout << "Yes" << endl ;
        cout << "101" << endl ;
        for(int i=0;i<101;i++){
            cout << i << " " ;
        }cout << endl ;
    }
    }
return 0;
}