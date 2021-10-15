#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n , k ; cin >> n >> k ;
       int arr[k] ;
        for(int i=0;i<k;i++){
            cin >> arr[i] ;
        }

        sort(arr,arr+k) ;
        int c = 0 , ct = 0 ;
        for(int i=k-1;i>=0;i--){
            if(c>=arr[i]){
                break;
            }
            else{
                int a = (n-arr[i]) ;
                // cout << a << endl ;
                // cout << c << endl ;
                c += a ;
                ct++ ;
            }
        }
        cout << ct << endl;
        
    }
return 0;
}