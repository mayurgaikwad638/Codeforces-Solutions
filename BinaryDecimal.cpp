#include<iostream>
using namespace std ;
int main()
{
    int t; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int x = 0;
        while(n>0){
            int a = n % 10 ;
            x = max(x,a) ;
            n/=10 ;
        }
        cout << x << endl ;
    }
return 0;
}