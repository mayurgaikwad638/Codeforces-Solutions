#include<iostream>
using namespace std ;
int main()
{
    int arr[1000] = {0} ;
    int count =1 ;
    for(int i=1;i<=1000;i++){
        int rem = count % 10 ;
        while(count%3 == 0 || rem==3){
            count++ ;
            rem = count % 10 ;
        }
        arr[i] = count ;
        count++ ;
    }
    int t ; cin >> t ;
    while(t--){
    
    int k; cin >> k ;
    cout << arr[k] << endl ;
    }
return 0;
}