#include<iostream>
using namespace std ;
int main()
{
    int t ; cin >> t ;
    while(t--){
        long long n ;
        cin >> n ;

        long long l , r ;
        l = -n+1 ;
        r = n ;

        cout << l << " " << r << endl ;
    }
return 0;
}