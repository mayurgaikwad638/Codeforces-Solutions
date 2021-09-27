#include<iostream>
#include<algorithm>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int arr[3] , m ;
        for(int i=0;i<3;i++){
            cin >> arr[i] ;
        }
        cin >> m ;
        sort(arr,arr+3) ;

        int mx = arr[0]+arr[1]+arr[2]-3  ;
        // cout << mx << endl ;

        int min = arr[2]-arr[1]-arr[0]-1 ;
        // cout << min << endl ;

        if(m>mx || m<min){
            cout << "NO" << endl ;
        }else{
            cout << "YES" << endl ;
        }



    }
return 0;
}