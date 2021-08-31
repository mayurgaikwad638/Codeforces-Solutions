#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int arr[n] = {0};
        for(int i=1;i<=n;i++) cin >> arr[i] ;
        
        int i=1, j=n ;
        while(i<=j){
            if(i==j){
                cout << arr[i] ;
                i++ ; j-- ;
            }
            else{
            cout << arr[i] << " " << arr[j] << " ";
            i++ ;
            j-- ;
            }
        }cout << endl ;
        
        }
    
return 0;
}