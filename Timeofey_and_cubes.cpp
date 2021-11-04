#include<iostream>
using namespace std ;
#define ll long long
int main()
{
    int n ; cin >> n ;
    ll arr[n] ;
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }
    int i = 0 , j = n-1 ;
    while(i<j){
        int temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;
        i +=2 ;
        j -=2 ;
    }
    
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
return 0;
}