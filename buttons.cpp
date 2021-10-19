#include<iostream>
using namespace std ;
int main()
{
    int n ; cin >> n ;
    int ans = 0 , j = 1 ;
    for(int i=n;i>0;i--){
        ans += (i*j)-(i-1) ;
        j++ ;
    }
    cout << ans << endl ;
return 0;
}