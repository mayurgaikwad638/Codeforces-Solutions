#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector<int> arr(n) ;
        for(int i=0;i<n;i++) cin >> arr[i] ;
        
        int ct = 0 ;
        while(!is_sorted(arr.begin(),arr.end())){
            for(int i=ct%2;i+1<n;i+=2){
                if(arr[i]>arr[i+1])
                swap(arr[i],arr[i+1]) ;
            }
            ct +=1  ;
        }
        cout << ct << endl ;
    }
return 0;
}